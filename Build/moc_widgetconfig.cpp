/****************************************************************************
** Meta object code from reading C++ file 'widgetconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgetconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dynamometer__DWidgetConfig_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dynamometer__DWidgetConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dynamometer__DWidgetConfig_t qt_meta_stringdata_Dynamometer__DWidgetConfig = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Dynamometer::DWidgetConfig"
QT_MOC_LITERAL(1, 27, 8), // "lineEdit"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "edit"
QT_MOC_LITERAL(4, 42, 8), // "checkBox"
QT_MOC_LITERAL(5, 51, 11), // "colorButton"
QT_MOC_LITERAL(6, 63, 10), // "fontButton"
QT_MOC_LITERAL(7, 74, 21) // "on_buttonBox_accepted"

    },
    "Dynamometer::DWidgetConfig\0lineEdit\0"
    "\0edit\0checkBox\0colorButton\0fontButton\0"
    "on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dynamometer__DWidgetConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dynamometer::DWidgetConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DWidgetConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lineEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->checkBox(); break;
        case 2: _t->colorButton(); break;
        case 3: _t->fontButton(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dynamometer::DWidgetConfig::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Dynamometer__DWidgetConfig.data,
    qt_meta_data_Dynamometer__DWidgetConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dynamometer::DWidgetConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dynamometer::DWidgetConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dynamometer__DWidgetConfig.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dynamometer::DWidgetConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
