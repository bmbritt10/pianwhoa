/****************************************************************************
** Meta object code from reading C++ file 'rowtutor.h'
**
** Created: Thu Apr 18 13:17:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rowtutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rowtutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rowTutor[] = {

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
      10,    9,    9,    9, 0x08,
      21,    9,    9,    9, 0x08,
      37,   32,    9,    9, 0x08,
      69,   64,    9,    9, 0x08,
      87,    9,    9,    9, 0x08,
      99,    9,    9,    9, 0x08,
     111,    9,    9,    9, 0x08,
     123,    9,    9,    9, 0x08,
     135,    9,    9,    9, 0x08,
     147,    9,    9,    9, 0x08,
     161,    9,    9,    9, 0x08,
     168,    9,    9,    9, 0x08,
     175,    9,    9,    9, 0x08,
     182,    9,    9,    9, 0x08,
     189,    9,    9,    9, 0x08,
     196,    9,    9,    9, 0x08,
     203,    9,    9,    9, 0x08,
     210,    9,    9,    9, 0x08,
     217,    9,    9,    9, 0x08,
     224,    9,    9,    9, 0x08,
     232,    9,    9,    9, 0x08,
     240,    9,    9,    9, 0x08,
     248,    9,    9,    9, 0x08,
     256,    9,    9,    9, 0x08,
     264,    9,    9,    9, 0x08,
     272,    9,    9,    9, 0x08,
     280,    9,    9,    9, 0x08,
     288,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rowTutor[] = {
    "rowTutor\0\0playSong()\0stopSong()\0song\0"
    "playTutorSong(QList<char>)\0note\0"
    "playNoteGUI(char)\0noteCDown()\0noteDDown()\0"
    "noteEDown()\0noteFDown()\0noteGDown()\0"
    "noteHiCDown()\0key1()\0key2()\0key3()\0"
    "key4()\0key5()\0key6()\0key7()\0key8()\0"
    "key9()\0key10()\0key11()\0key12()\0key13()\0"
    "key14()\0key15()\0key16()\0key17()\0key18()\0"
};

void rowTutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        rowTutor *_t = static_cast<rowTutor *>(_o);
        switch (_id) {
        case 0: _t->playSong(); break;
        case 1: _t->stopSong(); break;
        case 2: _t->playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: _t->playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: _t->noteCDown(); break;
        case 5: _t->noteDDown(); break;
        case 6: _t->noteEDown(); break;
        case 7: _t->noteFDown(); break;
        case 8: _t->noteGDown(); break;
        case 9: _t->noteHiCDown(); break;
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

const QMetaObjectExtraData rowTutor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rowTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_rowTutor,
      qt_meta_data_rowTutor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rowTutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rowTutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rowTutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rowTutor))
        return static_cast<void*>(const_cast< rowTutor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int rowTutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
