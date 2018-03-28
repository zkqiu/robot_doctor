/****************************************************************************
** Meta object code from reading C++ file 'vibrationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vibrationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vibrationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VibrationDialog_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VibrationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VibrationDialog_t qt_meta_stringdata_VibrationDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VibrationDialog"
QT_MOC_LITERAL(1, 16, 15), // "getRealtimeData"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "onRunStopChanged"
QT_MOC_LITERAL(4, 50, 3), // "run"
QT_MOC_LITERAL(5, 54, 10), // "updatePlot"
QT_MOC_LITERAL(6, 65, 12), // "updatePeriod"
QT_MOC_LITERAL(7, 78, 9), // "startSave"
QT_MOC_LITERAL(8, 88, 11), // "openHistory"
QT_MOC_LITERAL(9, 100, 10) // "evalHealth"

    },
    "VibrationDialog\0getRealtimeData\0\0"
    "onRunStopChanged\0run\0updatePlot\0"
    "updatePeriod\0startSave\0openHistory\0"
    "evalHealth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VibrationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VibrationDialog *_t = static_cast<VibrationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getRealtimeData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onRunStopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updatePlot(); break;
        case 3: _t->updatePeriod((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->startSave(); break;
        case 5: _t->openHistory(); break;
        case 6: _t->evalHealth(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VibrationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VibrationDialog.data,
      qt_meta_data_VibrationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VibrationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
