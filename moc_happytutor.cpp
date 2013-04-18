/****************************************************************************
** Meta object code from reading C++ file 'happytutor.h'
**
** Created: Thu Mar 7 18:02:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "happytutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'happytutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_happyTutor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
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
     137,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,
     161,   11,   11,   11, 0x08,
     173,   11,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     187,   11,   11,   11, 0x08,
     194,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     208,   11,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     222,   11,   11,   11, 0x08,
     229,   11,   11,   11, 0x08,
     236,   11,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     260,   11,   11,   11, 0x08,
     268,   11,   11,   11, 0x08,
     276,   11,   11,   11, 0x08,
     284,   11,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,
     300,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_happyTutor[] = {
    "happyTutor\0\0playSong()\0stopSong()\0"
    "song\0playTutorSong(QList<char>)\0note\0"
    "playNoteGUI(char)\0noteCDown()\0noteFDown()\0"
    "noteGDown()\0noteEDown()\0noteADown()\0"
    "noteuDown()\0noteDDown()\0key1()\0key2()\0"
    "key3()\0key4()\0key5()\0key6()\0key7()\0"
    "key8()\0key9()\0key10()\0key11()\0key12()\0"
    "key13()\0key14()\0key15()\0key16()\0key17()\0"
    "key18()\0"
};

void happyTutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        happyTutor *_t = static_cast<happyTutor *>(_o);
        switch (_id) {
        case 0: _t->playSong(); break;
        case 1: _t->stopSong(); break;
        case 2: _t->playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: _t->playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: _t->noteCDown(); break;
        case 5: _t->noteFDown(); break;
        case 6: _t->noteGDown(); break;
        case 7: _t->noteEDown(); break;
        case 8: _t->noteADown(); break;
        case 9: _t->noteuDown(); break;
        case 10: _t->noteDDown(); break;
        case 11: _t->key1(); break;
        case 12: _t->key2(); break;
        case 13: _t->key3(); break;
        case 14: _t->key4(); break;
        case 15: _t->key5(); break;
        case 16: _t->key6(); break;
        case 17: _t->key7(); break;
        case 18: _t->key8(); break;
        case 19: _t->key9(); break;
        case 20: _t->key10(); break;
        case 21: _t->key11(); break;
        case 22: _t->key12(); break;
        case 23: _t->key13(); break;
        case 24: _t->key14(); break;
        case 25: _t->key15(); break;
        case 26: _t->key16(); break;
        case 27: _t->key17(); break;
        case 28: _t->key18(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData happyTutor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject happyTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_happyTutor,
      qt_meta_data_happyTutor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &happyTutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *happyTutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *happyTutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_happyTutor))
        return static_cast<void*>(const_cast< happyTutor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int happyTutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
