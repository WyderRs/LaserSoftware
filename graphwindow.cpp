#include "graphwindow.h"
#include <QGraphicsScene>
#include <QWheelEvent>
#include <QtMath>
#include <QWheelEvent>
#include <QPainterPath>

#define VIEW_MAP_SIZE_WIDTH     400
#define VIEW_MAP_SIZE_HEIGHT    400


#define VIEW_MAP_POS_X          -(VIEW_MAP_SIZE_WIDTH  / 2.0f)
#define VIEW_MAP_POS_Y          -(VIEW_MAP_SIZE_HEIGHT / 2.0f)


graphWindow::graphWindow(QWidget *parent) : QGraphicsView(parent) {

    m_scene = new QGraphicsScene(this);
    setScene(m_scene);

    setRenderHint(QPainter::Antialiasing);
    setDragMode(QGraphicsView::ScrollHandDrag);

    m_scene->setSceneRect(VIEW_MAP_POS_X, VIEW_MAP_POS_Y, VIEW_MAP_SIZE_WIDTH, VIEW_MAP_SIZE_HEIGHT);
    // m_scene->setSceneRect(-200, -200, 400, 400);
    // Set point size
    m_pointRadius   = 0.1;
    m_lineWidth     = 0.5;
    // Инвертируем ось Y у scene, чтобы «+Y» в G-code шёл вверх
    scale(1, -1);

    drawBackgroundField();

}
graphWindow::~graphWindow() {
}

/* Clear scene */
void graphWindow::clear() {
    m_scene->clear();
    m_scene->setSceneRect(VIEW_MAP_POS_X, VIEW_MAP_POS_Y, VIEW_MAP_SIZE_WIDTH, VIEW_MAP_SIZE_HEIGHT);
}
/* Draw axes */
void graphWindow::drawBackgroundField() {

    drawGrid();

    QPen axisPenX(Qt::red);
    axisPenX.setWidthF(0.3);                 // толщина в мм сцены
    axisPenX.setCosmetic(false);

    QPen axisPenY(Qt::green);
    axisPenY.setWidthF(0.3);                 // толщина в мм сцены
    axisPenY.setCosmetic(false);

    // QPen axisPenZ(Qt::blue);
    // axisPenZ.setWidthF(0.3);                 // толщина в мм сцены
    // axisPenZ.setCosmetic(false);


    // Ось X — горизонтальная линия через y = 0
    m_scene->addLine(VIEW_MAP_POS_X, 0, VIEW_MAP_SIZE_WIDTH / 2.0, 0, axisPenX);
    // Ось Y — вертикальная линия через x = 0
    m_scene->addLine(0, VIEW_MAP_POS_Y, 0, VIEW_MAP_SIZE_HEIGHT / 2.0, axisPenY);

    // Стрелки-наконечники (маленькие треугольники полигоном)
    QBrush arrowBrushX(Qt::red);
    QBrush arrowBrushY(Qt::green);
    // QBrush arrowBrushZ(Qt::blue);

    float arrowForm[3][4][3] =
    {
        {
            {100, 0, 0},
            {92, 4,  -4},
            {92, -4,  -4},
            {92, 0,  4},
        },
        {
            {0, 100, 0},
            {4, 92,  -4},
            {-4, 92, -4},
            {0, 92, 4},
        },
        {
            {0, 0, 100},
            {4, 4, 92},
            {4, -4, 92},
            {-4, 0, 92},
        },
    };
    // стрелка на +X
    QPolygonF arrowX;
    arrowX <<
        QPointF(arrowForm[0][0][0], arrowForm[0][0][1]) <<
        QPointF(arrowForm[0][1][0], arrowForm[0][1][1]) <<
        QPointF(arrowForm[0][2][0], arrowForm[0][2][1]); /* << */

    m_scene->addPolygon(arrowX, Qt::NoPen, arrowBrushX);
    // стрелка на +Y
    QPolygonF arrowY;
    arrowY <<
        QPointF(arrowForm[1][0][0], arrowForm[1][0][1]) <<
        QPointF(arrowForm[1][1][0], arrowForm[1][1][1]) <<
        QPointF(arrowForm[1][2][0], arrowForm[1][2][1]);
    m_scene->addPolygon(arrowY, Qt::NoPen, arrowBrushY);

    // // стрелка на +Z
    // QPolygonF arrowZ;
    // arrowY <<
    //     QPointF(arrowForm[2][0][0], arrowForm[2][0][1]) <<
    //     QPointF(arrowForm[2][1][0], arrowForm[2][1][1]) <<
    //     QPointF(arrowForm[2][2][0], arrowForm[2][2][1]);
    // m_scene->addPolygon(arrowZ, Qt::NoPen, arrowBrushZ);

}
/* Grid drawing */
void graphWindow::drawGrid() {
    const double step = 1.0;                                     // 1 мм
    const double x0 = VIEW_MAP_POS_X;
    const double x1 = VIEW_MAP_POS_X + VIEW_MAP_SIZE_WIDTH;
    const double y0 = VIEW_MAP_POS_Y;
    const double y1 = VIEW_MAP_POS_Y + VIEW_MAP_SIZE_HEIGHT;

    QPainterPath finePath;
    QPainterPath majorPath;

    for (double x = x0; x <= x1 + 1e-6; x += step) {
        const int idx = qRound(x / step);
        QPainterPath &p = (idx % 10 == 0) ? majorPath : finePath;
        p.moveTo(x, y0);
        p.lineTo(x, y1);
    }
    for (double y = y0; y <= y1 + 1e-6; y += step) {
        const int idx = qRound(y / step);
        QPainterPath &p = (idx % 10 == 0) ? majorPath : finePath;
        p.moveTo(x0, y);
        p.lineTo(x1, y);
    }

    QPen finePen(QColor(235, 235, 235));
    finePen.setWidth(1);
    finePen.setCosmetic(true);

    QPen majorPen(QColor(210, 210, 210));
    majorPen.setWidth(1);
    majorPen.setCosmetic(true);

    m_scene->addPath(finePath,  finePen);
    m_scene->addPath(majorPath, majorPen);


}
/* Add point to View */
void graphWindow::addPoint(double x, double y, QColor clr) {
    m_scene->addEllipse(
        x - m_pointRadius,
        y - m_pointRadius,
        2 * m_pointRadius,
        2 * m_pointRadius,
        Qt::NoPen,
        QBrush(clr));
}
/* Add point to View */
void graphWindow::addLine(double x, double y, QColor clr) {
    QPen pen(clr);

    pen.setWidth(m_lineWidth);

    m_scene->addLine(x_last, y_last, x, y, pen);
    x_last = x;
    y_last = y;

    // if (clr != clr_last) {
    //     clr_last = clr;
    // }
}
/* Even by wheel */
void graphWindow::wheelEvent(QWheelEvent *event) {

    const int delta = event->angleDelta().y();
    if (delta == 0) { event->ignore(); return; }

    if (event->modifiers() & Qt::ControlModifier) {
        // Ctrl + колесо -> вращение
        // Минус — потому что ось Y инвертирована в scale(1, -1)
        rotate(delta > 0 ? -15.0 : 15.0);
    } else {
        // Колесо -> зум к курсору
        setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
        const double factor = delta > 0 ? 1.15 : 1.0 / 1.15;
        scale(factor, factor);
    }
    event->accept();
}
/* Regeneration View window*/
void graphWindow::regenerateView()
{
    resetTransform();          // сброс всех zoom/rotate
    scale(1, -1);              // возврат инверсии Y
    centerOn(0, 0);            // центр в начале координат
}
/* Clear View window */
void graphWindow::clearView() {
    m_scene->clear();
    drawBackgroundField();
}

// void graphWindow::zoomIn()  { setTransformationAnchor(AnchorUnderMouse); scale(1.25, 1.25); }
// void graphWindow::zoomOut() { setTransformationAnchor(AnchorUnderMouse); scale(1/1.25, 1/1.25); }

// void graphWindow::rotateCW()  { rotate(-15.0); }   // минус из-за Y-flip
// void graphWindow::rotateCCW() { rotate( 15.0); }
