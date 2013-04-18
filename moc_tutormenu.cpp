/****************************************************************************
** Meta object code from reading C++ file 'tutormenu.h'
**
** Created: Thu Apr 18 13:17:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tutormenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tutormenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tutorMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      19,   10,   10,   10, 0x08,
      27,   10,   10,   10, 0x08,
      33,   10,   10,   10, 0x08,
      39,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tutorMenu[] = {
    "tutorMenu\0\0zelda()\0happy()\0row()\0hot()\0"
    "twinkle()\0"
};

void tutorMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tutorMenu *_t = static_cast<tutorMenu *>(_o);
        switch (_id) {
        case 0: _t->zelda(); break;
        case 1: _t->happy(); break;
        case 2: _t->row(); break;
        case 3: _t->hot(); break;
        case 4: _t->twinkle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tutorMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tutorMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tutorMenu,
      qt_meta_data_tutorMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tutorMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tutorMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tutorMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tutorMenu))
        return static_cast<void*>(const_cast< tutorMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int tutorMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
