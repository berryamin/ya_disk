/****************************************************************************
** Meta object code from reading C++ file 'FileController.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/controllers/FileController.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileController.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       4,  284, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   16,   15,   15, 0x05,
      60,   46,   15,   15, 0x05,
      88,   46,   15,   15, 0x05,
     137,  116,   15,   15, 0x05,
     182,  165,   15,   15, 0x05,
     217,  165,   15,   15, 0x05,
     272,  251,   15,   15, 0x05,
     320,  310,   15,   15, 0x05,
     360,  344,   15,   15, 0x05,
     429,  394,   15,   15, 0x05,
     518,  474,   15,   15, 0x05,
     580,  574,   15,   15, 0x05,
     621,  607,   15,   15, 0x05,
     668,  656,   15,   15, 0x05,
     704,  696,   15,   15, 0x05,
     758,  736,   15,   15, 0x05,
     801,  789,   15,   15, 0x05,
     844,  834,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     872,   15,   15,   15, 0x08,
     881,   15,   15,   15, 0x08,
     896,   15,   15,   15, 0x08,
     911,   15,   15,   15, 0x08,
     943,  932,   15,   15, 0x08,
     975,   15,   15,   15, 0x08,
     994,   15,   15,   15, 0x08,
    1010,   15,   15,   15, 0x08,
    1024,   15,   15,   15, 0x08,
    1042,   15,   15,   15, 0x08,

 // methods: signature, parameters, type, tag, flags
    1076, 1057,   15,   15, 0x02,
    1114, 1102,   15,   15, 0x22,
    1141, 1136,   15,   15, 0x22,
    1159,   15,   15,   15, 0x22,
    1170,   46,   15,   15, 0x02,
    1196,   46,   15,   15, 0x02,
    1242, 1222,   15,   15, 0x02,
    1269,  165,   15,   15, 0x02,
    1302,  165,   15,   15, 0x02,
    1361, 1335,   15,   15, 0x02,
    1427, 1385,   15,   15, 0x02,
    1510, 1472,   15,   15, 0x22,
    1578, 1547,   15,   15, 0x02,
    1648, 1621,   15,   15, 0x22,
    1696,   15, 1683,   15, 0x02,
    1707,   15, 1683,   15, 0x02,
    1731, 1726,   15,   15, 0x02,
    1755,   15,   15,   15, 0x02,
    1776,   15,   15,   15, 0x02,
    1793,  656,   15,   15, 0x02,
    1817,  696,   15,   15, 0x02,
    1840,   46,   15,   15, 0x02,
    1869,   15,   15,   15, 0x02,
    1886,  789,   15,   15, 0x02,
    1915,   15,   15,   15, 0x02,
    1934, 1136,   15,   15, 0x02,

 // properties: name, type, flags
     574, 1683, 0x09495001,
     607, 1683, 0x09495001,
     789, 1683, 0x09495103,
     656, 1954, 0x0a495103,

 // properties: notify_signal_id
      11,
      12,
      16,
      13,

       0        // eod
};

static const char qt_meta_stringdata_FileController[] = {
    "FileController\0\0data\0dataLoaded(QVariantList)\0"
    "filename,path\0fileLoaded(QString,QString)\0"
    "fileOpened(QString,QString)\0"
    "direname,currentPath\0dirCreated(QString,QString)\0"
    "name,currentPath\0deletionRequested(QString,QString)\0"
    "fileOrDirDeleted(QString,QString)\0"
    "remoteUri,sent,total\0"
    "uploadProgress(QString,qint64,qint64)\0"
    "remoteUri\0uploadFinished(QString)\0"
    "targetPath,file\0fileUploaded(QString,QVariantMap)\0"
    "prevName,prevPath,newName,namePath\0"
    "fileRenamed(QString,QString,QString,QString)\0"
    "name,prevPath,newPath,currentPath,isDir,ext\0"
    "fileMoved(QString,QString,QString,QString,bool,QString)\0"
    "queue\0queueChanged(QVariantList)\0"
    "selectedFiles\0selectedFilesChanged(QVariantList)\0"
    "currentPath\0currentPathChanged(QString)\0"
    "fileMap\0propsPageRequested(QVariantMap)\0"
    "path,localPreviewPath\0"
    "previewLoaded(QString,QString)\0"
    "sharedFiles\0sharedFilesChanged(QVariantList)\0"
    "path,link\0publicMade(QString,QString)\0"
    "onLoad()\0onFileLoaded()\0onDirCreated()\0"
    "onFileOrDirDeleted()\0sent,total\0"
    "onUploadProgress(qint64,qint64)\0"
    "onUploadFinished()\0onFileRenamed()\0"
    "onFileMoved()\0onPreviewLoaded()\0"
    "onPublicMade()\0path,amount,offset\0"
    "loadPath(QString,int,int)\0path,amount\0"
    "loadPath(QString,int)\0path\0loadPath(QString)\0"
    "loadPath()\0loadFile(QString,QString)\0"
    "openFile(QString,QString)\0dirname,currentPath\0"
    "createDir(QString,QString)\0"
    "requestDeletion(QString,QString)\0"
    "deleteFileOrDir(QString,QString)\0"
    "sourceFilePath,targetPath\0"
    "upload(QString,QString)\0"
    "currentName,currentPath,newName,isDir,ext\0"
    "rename(QString,QString,QString,bool,QString)\0"
    "currentName,currentPath,newName,isDir\0"
    "rename(QString,QString,QString,bool)\0"
    "name,fromPath,toPath,isDir,ext\0"
    "move(QString,QString,QString,bool,QString)\0"
    "name,fromPath,toPath,isDir\0"
    "move(QString,QString,QString,bool)\0"
    "QVariantList\0getQueue()\0getSelectedFiles()\0"
    "file\0selectFile(QVariantMap)\0"
    "clearSelectedFiles()\0getCurrentPath()\0"
    "setCurrentPath(QString)\0showProps(QVariantMap)\0"
    "loadPreview(QString,QString)\0"
    "getSharedFiles()\0setSharedFiles(QVariantList)\0"
    "clearSharedFiles()\0makePublic(QString)\0"
    "QString\0"
};

void FileController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileController *_t = static_cast<FileController *>(_o);
        switch (_id) {
        case 0: _t->dataLoaded((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 1: _t->fileLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->fileOpened((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->dirCreated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->deletionRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->fileOrDirDeleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->uploadProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 7: _t->uploadFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->fileUploaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 9: _t->fileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 10: _t->fileMoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 11: _t->queueChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 12: _t->selectedFilesChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 13: _t->currentPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->propsPageRequested((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 15: _t->previewLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->sharedFilesChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 17: _t->publicMade((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->onLoad(); break;
        case 19: _t->onFileLoaded(); break;
        case 20: _t->onDirCreated(); break;
        case 21: _t->onFileOrDirDeleted(); break;
        case 22: _t->onUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 23: _t->onUploadFinished(); break;
        case 24: _t->onFileRenamed(); break;
        case 25: _t->onFileMoved(); break;
        case 26: _t->onPreviewLoaded(); break;
        case 27: _t->onPublicMade(); break;
        case 28: _t->loadPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 29: _t->loadPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 30: _t->loadPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->loadPath(); break;
        case 32: _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->createDir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 35: _t->requestDeletion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->deleteFileOrDir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 37: _t->upload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 38: _t->rename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 39: _t->rename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 40: _t->move((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 41: _t->move((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 42: { QVariantList _r = _t->getQueue();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 43: { QVariantList _r = _t->getSelectedFiles();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 44: _t->selectFile((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 45: _t->clearSelectedFiles(); break;
        case 46: _t->getCurrentPath(); break;
        case 47: _t->setCurrentPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->showProps((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 49: _t->loadPreview((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: _t->getSharedFiles(); break;
        case 51: _t->setSharedFiles((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 52: _t->clearSharedFiles(); break;
        case 53: _t->makePublic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileController,
      qt_meta_data_FileController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileController))
        return static_cast<void*>(const_cast< FileController*>(this));
    return QObject::qt_metacast(_clname);
}

int FileController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = getQueue(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = getSelectedFiles(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = getSharedFiles(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getCurrentPath(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setSharedFiles(*reinterpret_cast< QVariantList*>(_v)); break;
        case 3: setCurrentPath(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileController::dataLoaded(const QVariantList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileController::fileLoaded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileController::fileOpened(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileController::dirCreated(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileController::deletionRequested(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileController::fileOrDirDeleted(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileController::uploadProgress(const QString & _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FileController::uploadFinished(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FileController::fileUploaded(const QString _t1, const QVariantMap _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FileController::fileRenamed(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FileController::fileMoved(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const bool & _t5, const QString & _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FileController::queueChanged(const QVariantList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FileController::selectedFilesChanged(const QVariantList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FileController::currentPathChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FileController::propsPageRequested(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void FileController::previewLoaded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FileController::sharedFilesChanged(const QVariantList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void FileController::publicMade(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE
