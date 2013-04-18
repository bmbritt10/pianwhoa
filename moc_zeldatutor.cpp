/****************************************************************************
** Meta object code from reading C++ file 'zeldatutor.h'
**
** Created: Thu Mar 7 18:02:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "zeldatutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zeldatutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZeldaTutor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      23,   11,   11,   11, 0x08,
      39,   34,   11,   11, 0x08,
      71,   66,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     101,   11,   11,   11, 0x08,
     113,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     139,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     167,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     217,   11,   11,   11, 0x08,
     224,   11,   11,   11, 0x08,
     231,   11,   11,   11, 0x08,
     238,   11,   11,   11, 0x08,
     245,   11,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     259,   11,   11,   11, 0x08,
     266,   11,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     296,   11,   11,   11, 0x08,
     304,   11,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     320,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     336,   11,   11,   11, 0x08,
     344,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZeldaTutor[] = {
    "ZeldaTutor\0\0playSong()\0stopSong()\0"
    "song\0playTutorSong(QList<char>)\0note\0"
    "playNoteGUI(char)\0noteFDown()\0noteADown()\0"
    "noteBDown()\0noteHiEDown()\0noteHiDDown()\0"
    "noteHiCDown()\0noteGDown()\0noteEDown()\0"
    "noteDDown()\0noteHiFDown()\0key1()\0"
    "key2()\0key3()\0key4()\0key5()\0key6()\0"
    "key7()\0key8()\0key9()\0key10()\0key11()\0"
    "key12()\0key13()\0key14()\0key15()\0key16()\0"
    "key17()\0key18()\0"
};

void ZeldaTutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZeldaTutor *_t = static_cast<ZeldaTutor *>(_o);
        switch (_id) {
        case 0: _t->playSong(); break;
        case 1: _t->stopSong(); break;
        case 2: _t->playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: _t->playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: _t->noteFDown(); break;
        case 5: _t->noteADown(); break;
        case 6: _t->noteBDown(); break;
        case 7: _t->noteHiEDown(); break;
        case 8: _t->noteHiDDown(); break;
        case 9: _t->noteHiCDown(); break;
        case 10: _t->noteGDown(); break;
        case 11: _t->noteEDown(); break;
        case 12: _t->noteDDown(); break;
        case 13: _t->noteHiFDown(); break;
        case 14: _t->key1(); break;
        case 15: _t->key2(); break;
        case 16: _t->key3(); break;
        case 17: _t->key4(); break;
        case 18: _t->key5(); break;
        case 19: _t->key6(); break;
        case 20: _t->key7(); break;
        case 21: _t->key8(); break;
        case 22: _t->key9(); break;
        case 23: _t->key10(); break;
        case 24: _t->key11(); break;
        case 25: _t->key12(); break;
        case 26: _t->key13(); break;
        case 27: _t->key14(); break;
        case 28: _t->key15(); break;
        case 29: _t->key16(); break;
        case 30: _t->key17(); break;
        case 31: _t->key18(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZeldaTutor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZeldaTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZeldaTutor,
      qt_meta_data_ZeldaTutor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZeldaTutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZeldaTutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZeldaTutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZeldaTutor))
        return static_cast<void*>(const_cast< ZeldaTutor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ZeldaTutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
