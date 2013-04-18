/****************************************************************************
** Meta object code from reading C++ file 'twinkletutor.h'
**
** Created: Thu Mar 7 18:02:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "twinkletutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twinkletutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_twinkleTutor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      25,   13,   13,   13, 0x08,
      41,   36,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,
      80,   13,   13,   13, 0x08,
      92,   13,   13,   13, 0x08,
     104,   13,   13,   13, 0x08,
     116,   13,   13,   13, 0x08,
     128,   13,   13,   13, 0x08,
     145,  140,   13,   13, 0x08,
     163,   13,   13,   13, 0x08,
     170,   13,   13,   13, 0x08,
     177,   13,   13,   13, 0x08,
     184,   13,   13,   13, 0x08,
     191,   13,   13,   13, 0x08,
     198,   13,   13,   13, 0x08,
     205,   13,   13,   13, 0x08,
     212,   13,   13,   13, 0x08,
     219,   13,   13,   13, 0x08,
     226,   13,   13,   13, 0x08,
     234,   13,   13,   13, 0x08,
     242,   13,   13,   13, 0x08,
     250,   13,   13,   13, 0x08,
     258,   13,   13,   13, 0x08,
     266,   13,   13,   13, 0x08,
     274,   13,   13,   13, 0x08,
     282,   13,   13,   13, 0x08,
     290,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_twinkleTutor[] = {
    "twinkleTutor\0\0songPlay()\0songStop()\0"
    "song\0playTutorSong(QList<char>)\0"
    "noteCDown()\0noteGDown()\0noteADown()\0"
    "noteFDown()\0noteEDown()\0noteDDown()\0"
    "note\0playNoteGUI(char)\0key1()\0key2()\0"
    "key3()\0key4()\0key5()\0key6()\0key7()\0"
    "key8()\0key9()\0key10()\0key11()\0key12()\0"
    "key13()\0key14()\0key15()\0key16()\0key17()\0"
    "key18()\0"
};

void twinkleTutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        twinkleTutor *_t = static_cast<twinkleTutor *>(_o);
        switch (_id) {
        case 0: _t->songPlay(); break;
        case 1: _t->songStop(); break;
        case 2: _t->playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: _t->noteCDown(); break;
        case 4: _t->noteGDown(); break;
        case 5: _t->noteADown(); break;
        case 6: _t->noteFDown(); break;
        case 7: _t->noteEDown(); break;
        case 8: _t->noteDDown(); break;
        case 9: _t->playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 10: _t->key1(); break;
        case 11: _t->key2(); break;
        case 12: _t->key3(); break;
        case 13: _t->key4(); break;
        case 14: _t->key5(); break;
        case 15: _t->key6(); break;
        case 16: _t->key7(); break;
        case 17: _t->key8(); break;
        case 18: _t->key9(); break;
        case 19: _t->key10(); break;
        case 20: _t->key11(); break;
        case 21: _t->key12(); break;
        case 22: _t->key13(); break;
        case 23: _t->key14(); break;
        case 24: _t->key15(); break;
        case 25: _t->key16(); break;
        case 26: _t->key17(); break;
        case 27: _t->key18(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData twinkleTutor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject twinkleTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_twinkleTutor,
      qt_meta_data_twinkleTutor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &twinkleTutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *twinkleTutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *twinkleTutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_twinkleTutor))
        return static_cast<void*>(const_cast< twinkleTutor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int twinkleTutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
