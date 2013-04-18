/****************************************************************************
** Meta object code from reading C++ file 'tutormenu.h'
**
** Created: Thu Apr 18 15:42:44 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tutormenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tutormenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tutorMenu[] = {

 // content:
       5,       // revision
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

const QMetaObject tutorMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tutorMenu,
      qt_meta_data_tutorMenu, 0 }
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
        switch (_id) {
        case 0: zelda(); break;
        case 1: happy(); break;
        case 2: row(); break;
        case 3: hot(); break;
        case 4: twinkle(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
