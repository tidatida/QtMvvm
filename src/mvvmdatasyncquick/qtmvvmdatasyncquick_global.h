#ifndef MVVMDATASYNCQUICK_GLOBAL_H
#define MVVMDATASYNCQUICK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QT_BUILD_MVVMDATASYNCQUICK_LIB)
#	define Q_MVVMDATASYNCQUICK_EXPORT Q_DECL_EXPORT
#else
#	define Q_MVVMDATASYNCQUICK_EXPORT Q_DECL_IMPORT
#endif

namespace QtMvvm {

//! A method to initialize the datasync quick mvvm module
Q_MVVMDATASYNCQUICK_EXPORT void registerDataSyncQuick();

}

#endif // MVVMDATASYNCQUICK_GLOBAL_H
