/****************************************************************************
** Meta object code from reading C++ file 'events.h'
**
** Created: Sun Mar 16 10:28:58 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "events.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'events.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Events[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,    8,    7,    7, 0x08,
      35,    7,    7,    7, 0x28,
      50,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Events[] = {
    "Events\0\0checked\0changeFilter(bool)\0"
    "changeFilter()\0on_pushButton_clicked()\0"
};

void Events::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Events *_t = static_cast<Events *>(_o);
        switch (_id) {
        case 0: _t->changeFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->changeFilter(); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Events::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Events::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Events,
      qt_meta_data_Events, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Events::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Events::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Events::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Events))
        return static_cast<void*>(const_cast< Events*>(this));
    return QWidget::qt_metacast(_clname);
}

int Events::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
