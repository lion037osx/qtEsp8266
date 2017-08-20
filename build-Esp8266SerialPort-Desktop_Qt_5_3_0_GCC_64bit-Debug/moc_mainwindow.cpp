/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../srcEsp8266/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata[409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 16),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 30),
QT_MOC_LITERAL(4, 60, 28),
QT_MOC_LITERAL(5, 89, 11),
QT_MOC_LITERAL(6, 101, 3),
QT_MOC_LITERAL(7, 105, 27),
QT_MOC_LITERAL(8, 133, 33),
QT_MOC_LITERAL(9, 167, 25),
QT_MOC_LITERAL(10, 193, 26),
QT_MOC_LITERAL(11, 220, 5),
QT_MOC_LITERAL(12, 226, 29),
QT_MOC_LITERAL(13, 256, 25),
QT_MOC_LITERAL(14, 282, 28),
QT_MOC_LITERAL(15, 311, 10),
QT_MOC_LITERAL(16, 322, 5),
QT_MOC_LITERAL(17, 328, 3),
QT_MOC_LITERAL(18, 332, 21),
QT_MOC_LITERAL(19, 354, 29),
QT_MOC_LITERAL(20, 384, 24)
    },
    "MainWindow\0onDatosRecibidos\0\0"
    "on_pushButton_Conectar_clicked\0"
    "on_pushButton_Enviar_clicked\0send_at_cmd\0"
    "cmd\0on_pushButton_reset_clicked\0"
    "on_pushButton_esp_connect_clicked\0"
    "on_pushButton_web_clicked\0"
    "on_pushButton_wifi_clicked\0delay\0"
    "on_pushButton_default_clicked\0"
    "on_pushButton_log_clicked\0"
    "on_pushButton_closed_clicked\0updateTime\0"
    "char*\0txt\0on_pushButton_clicked\0"
    "on_pushButton_content_clicked\0"
    "on_pushButton_ip_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    1,   97,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->onDatosRecibidos(); break;
        case 1: _t->on_pushButton_Conectar_clicked(); break;
        case 2: _t->on_pushButton_Enviar_clicked(); break;
        case 3: _t->send_at_cmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_reset_clicked(); break;
        case 5: _t->on_pushButton_esp_connect_clicked(); break;
        case 6: _t->on_pushButton_web_clicked(); break;
        case 7: _t->on_pushButton_wifi_clicked(); break;
        case 8: _t->delay(); break;
        case 9: _t->on_pushButton_default_clicked(); break;
        case 10: _t->on_pushButton_log_clicked(); break;
        case 11: _t->on_pushButton_closed_clicked(); break;
        case 12: _t->updateTime((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_clicked(); break;
        case 14: _t->on_pushButton_content_clicked(); break;
        case 15: _t->on_pushButton_ip_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
