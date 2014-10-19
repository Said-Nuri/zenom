#ifndef HAPTICWAND_GLOBAL_H
#define HAPTICWAND_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HAPTICWAND_LIBRARY)
#  define HAPTICWANDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define HAPTICWANDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HAPTICWAND_GLOBAL_H