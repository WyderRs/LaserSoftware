#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <QGraphicsView>

class QGraphicsScene;
class QGraphicsEllipseItem;

class graphWindow : public QGraphicsView
{
    Q_OBJECT

public:
    explicit graphWindow(QWidget *parent = nullptr);
    ~graphWindow() override;

public slots:
    void addPoint(double x, double y, QColor clr);
    void addLine(double x, double y, QColor clr);

    void drawBackgroundField();
    void drawGrid();
    void clear();


    void regenerateView();
    void clearView();
    // void zoomIn();
    // void zoomOut();
    // void rotateCW();
    // void rotateCCW();

protected:
    void wheelEvent(QWheelEvent *event) override;


private:
    QGraphicsScene *m_scene = nullptr;
    double x_last, y_last;
    QColor clr_last = QColor(135, 206, 235);

public:
    double m_pointRadius = 1.0;
    double m_lineWidth   = 1.0;

};

#endif // GRAPHWINDOW_H
