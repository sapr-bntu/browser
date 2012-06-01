/****************************************************************************
** Meta object code from reading C++ file 'browser.h'
**
** Created: Fri 1. Jun 17:42:30 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Browser/browser/browser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Browser[] = {

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
       9,    8,    8,    8, 0x0a,
      40,    8,    8,    8, 0x0a,
      73,    8,    8,    8, 0x0a,
     101,    8,    8,    8, 0x0a,
     145,    8,    8,    8, 0x0a,
     173,  169,    8,    8, 0x0a,
     195,    8,  190,    8, 0x0a,
     209,    8,    8,    8, 0x0a,
     223,    8,    8,    8, 0x0a,
     235,    8,    8,    8, 0x0a,
     249,    8,    8,    8, 0x0a,
     270,    8,    8,    8, 0x0a,
     277,    8,    8,    8, 0x0a,
     288,  284,  190,    8, 0x0a,
     313,  284,  190,    8, 0x0a,
     335,  284,  190,    8, 0x0a,
     359,  284,  190,    8, 0x0a,
     380,    8,  190,    8, 0x0a,
     396,    8,  190,    8, 0x0a,
     432,    8,  190,    8, 0x0a,
     470,    8,  190,    8, 0x0a,
     503,    8,  190,    8, 0x0a,
     532,    8,  190,    8, 0x0a,
     551,    8,  190,    8, 0x0a,
     570,    8,  190,    8, 0x0a,
     587,    8,  190,    8, 0x0a,
     606,    8,  190,    8, 0x0a,
     618,    8,  190,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Browser[] = {
    "Browser\0\0on_comboBox_activated(QString)\0"
    "on_lineEdit_textChanged(QString)\0"
    "on_lineEdit_returnPressed()\0"
    "showHide(QSystemTrayIcon::ActivationReason)\0"
    "on_pushButton_clicked()\0url\0"
    "linkchange(QUrl)\0bool\0exitBrowser()\0"
    "TrayBrowser()\0helpAbout()\0helpAboutQt()\0"
    "changeEvent(QEvent*)\0Open()\0save()\0"
    "str\0UrlWithoutDomen(QString)\0"
    "UrlWithDomen(QString)\0UrlWithoutHTTP(QString)\0"
    "UrlWithHTTP(QString)\0ComboboxClear()\0"
    "on_comboBox_activatedCheck(QString)\0"
    "on_lineEdit_textChangedCheck(QString)\0"
    "on_lineEdit_returnPressedCheck()\0"
    "on_pushButton_clickedCheck()\0"
    "exitBrowserCheck()\0TrayBrowserCheck()\0"
    "helpAboutCheck()\0helpAboutQtCheck()\0"
    "OpenCheck()\0saveCheck()\0"
};

void Browser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Browser *_t = static_cast<Browser *>(_o);
        switch (_id) {
        case 0: _t->on_comboBox_activated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->showHide((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->linkchange((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: { bool _r = _t->exitBrowser();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->TrayBrowser(); break;
        case 8: _t->helpAbout(); break;
        case 9: _t->helpAboutQt(); break;
        case 10: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 11: _t->Open(); break;
        case 12: _t->save(); break;
        case 13: { bool _r = _t->UrlWithoutDomen((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->UrlWithDomen((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->UrlWithoutHTTP((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->UrlWithHTTP((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->ComboboxClear();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->on_comboBox_activatedCheck((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->on_lineEdit_textChangedCheck((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->on_lineEdit_returnPressedCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->on_pushButton_clickedCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->exitBrowserCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->TrayBrowserCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->helpAboutCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->helpAboutQtCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->OpenCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->saveCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Browser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Browser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Browser,
      qt_meta_data_Browser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Browser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Browser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Browser))
        return static_cast<void*>(const_cast< Browser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
