/****************************************************************************
** Meta object code from reading C++ file 'pianWHOA.h'
**
** Created: Thu Apr 18 15:42:43 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pianWHOA.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pianWHOA.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pianWHOA[] = {

 // content:
       5,       // revision
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

const QMetaObject pianWHOA::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pianWHOA,
      qt_meta_data_pianWHOA, 0 }
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
        switch (_id) {
        case 0: key1(); break;
        case 1: key2(); break;
        case 2: key3(); break;
        case 3: key4(); break;
        case 4: key5(); break;
        case 5: key6(); break;
        case 6: key7(); break;
        case 7: key8(); break;
        case 8: key9(); break;
        case 9: key10(); break;
        case 10: key11(); break;
        case 11: key12(); break;
        case 12: key13(); break;
        case 13: key14(); break;
        case 14: key15(); break;
        case 15: key16(); break;
        case 16: key17(); break;
        case 17: key18(); break;
        case 18: tutor(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
