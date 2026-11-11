/****************************************************************************
** Meta object code from reading C++ file 'comportworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../comportworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comportworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComPortWorker_t {
    QByteArrayData data[25];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComPortWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComPortWorker_t qt_meta_stringdata_ComPortWorker = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ComPortWorker"
QT_MOC_LITERAL(1, 14, 12), // "searchResult"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "ports"
QT_MOC_LITERAL(4, 34, 10), // "openResult"
QT_MOC_LITERAL(5, 45, 7), // "success"
QT_MOC_LITERAL(6, 53, 5), // "error"
QT_MOC_LITERAL(7, 59, 11), // "closeResult"
QT_MOC_LITERAL(8, 71, 11), // "writeResult"
QT_MOC_LITERAL(9, 83, 12), // "bytesWritten"
QT_MOC_LITERAL(10, 96, 12), // "dataReceived"
QT_MOC_LITERAL(11, 109, 4), // "data"
QT_MOC_LITERAL(12, 114, 12), // "codeFinished"
QT_MOC_LITERAL(13, 127, 4), // "init"
QT_MOC_LITERAL(14, 132, 8), // "onSearch"
QT_MOC_LITERAL(15, 141, 7), // "onWrite"
QT_MOC_LITERAL(16, 149, 11), // "onReadyRead"
QT_MOC_LITERAL(17, 161, 6), // "onOpen"
QT_MOC_LITERAL(18, 168, 8), // "portName"
QT_MOC_LITERAL(19, 177, 7), // "onClose"
QT_MOC_LITERAL(20, 185, 13), // "onSerialError"
QT_MOC_LITERAL(21, 199, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(22, 228, 3), // "err"
QT_MOC_LITERAL(23, 232, 17), // "onSendProcessCode"
QT_MOC_LITERAL(24, 250, 8) // "filePath"

    },
    "ComPortWorker\0searchResult\0\0ports\0"
    "openResult\0success\0error\0closeResult\0"
    "writeResult\0bytesWritten\0dataReceived\0"
    "data\0codeFinished\0init\0onSearch\0onWrite\0"
    "onReadyRead\0onOpen\0portName\0onClose\0"
    "onSerialError\0QSerialPort::SerialPortError\0"
    "err\0onSendProcessCode\0filePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComPortWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    2,   87,    2, 0x06 /* Public */,
       7,    0,   92,    2, 0x06 /* Public */,
       8,    3,   93,    2, 0x06 /* Public */,
      10,    1,  100,    2, 0x06 /* Public */,
      12,    2,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  108,    2, 0x0a /* Public */,
      14,    0,  109,    2, 0x0a /* Public */,
      15,    1,  110,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    1,  114,    2, 0x0a /* Public */,
      19,    0,  117,    2, 0x0a /* Public */,
      20,    1,  118,    2, 0x0a /* Public */,
      23,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::LongLong, QMetaType::QString,    5,    9,    6,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void ComPortWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComPortWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchResult((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->openResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->closeResult(); break;
        case 3: _t->writeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->codeFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->init(); break;
        case 7: _t->onSearch(); break;
        case 8: _t->onWrite((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->onReadyRead(); break;
        case 10: _t->onOpen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onClose(); break;
        case 12: _t->onSerialError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 13: _t->onSendProcessCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComPortWorker::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComPortWorker::searchResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComPortWorker::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComPortWorker::openResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComPortWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComPortWorker::closeResult)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ComPortWorker::*)(bool , qint64 , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComPortWorker::writeResult)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ComPortWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComPortWorker::dataReceived)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ComPortWorker::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComPortWorker::codeFinished)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComPortWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComPortWorker.data,
    qt_meta_data_ComPortWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComPortWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComPortWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComPortWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComPortWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ComPortWorker::searchResult(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ComPortWorker::openResult(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ComPortWorker::closeResult()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ComPortWorker::writeResult(bool _t1, qint64 _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ComPortWorker::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ComPortWorker::codeFinished(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
