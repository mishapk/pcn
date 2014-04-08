/****************************************************************************
** Meta object code from reading C++ file 'welcome.h'
**
** Created: Tue Apr 8 11:48:44 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "welcome.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Welcome[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    8,    8,    8, 0x08,
      50,    8,    8,    8, 0x08,
      75,    8,    8,    8, 0x08,
     104,    8,    8,    8, 0x08,
     127,    8,    8,    8, 0x08,
     151,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Welcome[] = {
    "Welcome\0\0flag\0AdminMode(bool)\0"
    "slotButtonClicked()\0slotEnterButtonClicked()\0"
    "slotBackSpaceButtonClicked()\0"
    "on_AddButton_clicked()\0on_EditButton_clicked()\0"
    "on_DeleteButton_clicked()\0"
};

void Welcome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Welcome *_t = static_cast<Welcome *>(_o);
        switch (_id) {
        case 0: _t->AdminMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotButtonClicked(); break;
        case 2: _t->slotEnterButtonClicked(); break;
        case 3: _t->slotBackSpaceButtonClicked(); break;
        case 4: _t->on_AddButton_clicked(); break;
        case 5: _t->on_EditButton_clicked(); break;
        case 6: _t->on_DeleteButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Welcome::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Welcome::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Welcome,
      qt_meta_data_Welcome, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Welcome::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Welcome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Welcome::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Welcome))
        return static_cast<void*>(const_cast< Welcome*>(this));
    return QWidget::qt_metacast(_clname);
}

int Welcome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Welcome::AdminMode(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
