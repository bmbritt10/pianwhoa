/****************************************************************************
** Meta object code from reading C++ file 'pianWHOA.h'
**
** Created: Thu Apr 18 13:17:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pianWHOA.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pianWHOA.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pianWHOA[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      17,    9,    9,    9, 0x08,
      24,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      38,    9,    9,    9, 0x08,
      45,    9,    9,    9, 0x08,
      52,    9,    9,    9, 0x08,
      59,    9,    9,    9, 0x08,
      66,    9,    9,    9, 0x08,
      73,    9,    9,    9, 0x08,
      81,    9,    9,    9, 0x08,
      89,    9,    9,    9, 0x08,
      97,    9,    9,    9, 0x08,
     105,    9,    9,    9, 0x08,
     113,    9,    9,    9, 0x08,
     121,    9,    9,    9, 0x08,
     129,    9,    9,    9, 0x08,
     137,    9,    9,    9, 0x08,
     145,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pianWHOA[] = {
    "pianWHOA\0\0key1()\0key2()\0key3()\0key4()\0"
    "key5()\0key6()\0key7()\0key8()\0key9()\0"
    "key10()\0key11()\0key12()\0key13()\0key14()\0"
    "key15()\0key16()\0key17()\0key18()\0tutor()\0"
};

void pianWHOA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pianWHOA *_t = static_cast<pianWHOA *>(_o);
        switch (_id) {
        case 0: _t->key1(); break;
        case 1: _t->key2(); break;
        case 2: _t->key3(); break;
        case 3: _t->key4(); break;
        case 4: _t->key5(); break;
        case 5: _t->key6(); break;
        case 6: _t->key7(); break;
        case 7: _t->key8(); break;
        case 8: _t->key9(); break;
        case 9: _t->key10(); break;
        case 10: _t->key11(); break;
        case 11: _t->key12(); break;
        case 12: _t->key13(); break;
        case 13: _t->key14(); break;
        case 14: _t->key15(); break;
        case 15: _t->key16(); break;
        case 16: _t->key17(); break;
        case 17: _t->key18(); break;
        case 18: _t->tutor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pianWHOA::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pianWHOA::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pianWHOA,
      qt_meta_data_pianWHOA, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pianWHOA::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pianWHOA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pianWHOA::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pianWHOA))
        return static_cast<void*>(const_cast< pianWHOA*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int pianWHOA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
