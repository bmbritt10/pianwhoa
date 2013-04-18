/****************************************************************************
** Meta object code from reading C++ file 'zeldatutor.h'
**
** Created: Thu Apr 18 15:42:45 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "zeldatutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zeldatutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZeldaTutor[] = {

 // content:
       5,       // revision
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

const QMetaObject ZeldaTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZeldaTutor,
      qt_meta_data_ZeldaTutor, 0 }
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
        switch (_id) {
        case 0: playSong(); break;
        case 1: stopSong(); break;
        case 2: playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: noteFDown(); break;
        case 5: noteADown(); break;
        case 6: noteBDown(); break;
        case 7: noteHiEDown(); break;
        case 8: noteHiDDown(); break;
        case 9: noteHiCDown(); break;
        case 10: noteGDown(); break;
        case 11: noteEDown(); break;
        case 12: noteDDown(); break;
        case 13: noteHiFDown(); break;
        case 14: key1(); break;
        case 15: key2(); break;
        case 16: key3(); break;
        case 17: key4(); break;
        case 18: key5(); break;
        case 19: key6(); break;
        case 20: key7(); break;
        case 21: key8(); break;
        case 22: key9(); break;
        case 23: key10(); break;
        case 24: key11(); break;
        case 25: key12(); break;
        case 26: key13(); break;
        case 27: key14(); break;
        case 28: key15(); break;
        case 29: key16(); break;
        case 30: key17(); break;
        case 31: key18(); break;
        default: ;
        }
        _id -= 32;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
