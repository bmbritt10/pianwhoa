/****************************************************************************
** Meta object code from reading C++ file 'happytutor.h'
**
** Created: Thu Apr 18 15:42:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "happytutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'happytutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_happyTutor[] = {

 // content:
       5,       // revision
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

const QMetaObject happyTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_happyTutor,
      qt_meta_data_happyTutor, 0 }
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
        switch (_id) {
        case 0: playSong(); break;
        case 1: stopSong(); break;
        case 2: playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: noteCDown(); break;
        case 5: noteFDown(); break;
        case 6: noteGDown(); break;
        case 7: noteEDown(); break;
        case 8: noteADown(); break;
        case 9: noteuDown(); break;
        case 10: noteDDown(); break;
        case 11: key1(); break;
        case 12: key2(); break;
        case 13: key3(); break;
        case 14: key4(); break;
        case 15: key5(); break;
        case 16: key6(); break;
        case 17: key7(); break;
        case 18: key8(); break;
        case 19: key9(); break;
        case 20: key10(); break;
        case 21: key11(); break;
        case 22: key12(); break;
        case 23: key13(); break;
        case 24: key14(); break;
        case 25: key15(); break;
        case 26: key16(); break;
        case 27: key17(); break;
        case 28: key18(); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
