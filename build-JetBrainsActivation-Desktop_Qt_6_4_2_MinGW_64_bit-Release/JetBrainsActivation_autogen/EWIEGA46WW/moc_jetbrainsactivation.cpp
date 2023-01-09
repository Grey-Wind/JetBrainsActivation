/****************************************************************************
** Meta object code from reading C++ file 'jetbrainsactivation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../JetBrainsActivation/jetbrainsactivation.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jetbrainsactivation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_JetBrainsActivation_t {
    uint offsetsAndSizes[18];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[18];
    char stringdata5[16];
    char stringdata6[20];
    char stringdata7[19];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_JetBrainsActivation_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_JetBrainsActivation_t qt_meta_stringdata_JetBrainsActivation = {
    {
        QT_MOC_LITERAL(0, 19),  // "JetBrainsActivation"
        QT_MOC_LITERAL(20, 16),  // "on_CLion_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 19),  // "on_DataGrip_clicked"
        QT_MOC_LITERAL(58, 17),  // "on_GoLand_clicked"
        QT_MOC_LITERAL(76, 15),  // "on_IDEA_clicked"
        QT_MOC_LITERAL(92, 19),  // "on_PhpStorm_clicked"
        QT_MOC_LITERAL(112, 18),  // "on_PyCharm_clicked"
        QT_MOC_LITERAL(131, 19)   // "on_WebStorm_clicked"
    },
    "JetBrainsActivation",
    "on_CLion_clicked",
    "",
    "on_DataGrip_clicked",
    "on_GoLand_clicked",
    "on_IDEA_clicked",
    "on_PhpStorm_clicked",
    "on_PyCharm_clicked",
    "on_WebStorm_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_JetBrainsActivation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject JetBrainsActivation::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_JetBrainsActivation.offsetsAndSizes,
    qt_meta_data_JetBrainsActivation,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_JetBrainsActivation_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JetBrainsActivation, std::true_type>,
        // method 'on_CLion_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DataGrip_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_GoLand_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_IDEA_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PhpStorm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PyCharm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_WebStorm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void JetBrainsActivation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JetBrainsActivation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_CLion_clicked(); break;
        case 1: _t->on_DataGrip_clicked(); break;
        case 2: _t->on_GoLand_clicked(); break;
        case 3: _t->on_IDEA_clicked(); break;
        case 4: _t->on_PhpStorm_clicked(); break;
        case 5: _t->on_PyCharm_clicked(); break;
        case 6: _t->on_WebStorm_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *JetBrainsActivation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JetBrainsActivation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JetBrainsActivation.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int JetBrainsActivation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
