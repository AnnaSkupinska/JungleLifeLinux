/****************************************************************************
** Meta object code from reading C++ file 'InterfaceWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "InterfaceWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InterfaceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InterfaceWindow_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceWindow_t qt_meta_stringdata_InterfaceWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "InterfaceWindow"
QT_MOC_LITERAL(1, 16, 11), // "resizeEvent"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 43, 5), // "event"
QT_MOC_LITERAL(5, 49, 11), // "eventFilter"
QT_MOC_LITERAL(6, 61, 7), // "watched"
QT_MOC_LITERAL(7, 69, 7), // "QEvent*"
QT_MOC_LITERAL(8, 77, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 101, 22) // "on_pauseButton_clicked"

    },
    "InterfaceWindow\0resizeEvent\0\0QResizeEvent*\0"
    "event\0eventFilter\0watched\0QEvent*\0"
    "on_pushButton_2_clicked\0on_pauseButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    2,   37,    2, 0x0a /* Public */,
       8,    0,   42,    2, 0x08 /* Private */,
       9,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 7,    6,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InterfaceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterfaceWindow *_t = static_cast<InterfaceWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pauseButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject InterfaceWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_InterfaceWindow.data,
      qt_meta_data_InterfaceWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InterfaceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceWindow.stringdata0))
        return static_cast<void*>(const_cast< InterfaceWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int InterfaceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
