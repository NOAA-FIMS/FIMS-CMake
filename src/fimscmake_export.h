
#ifndef FIMSCMAKE_EXPORT_H
#define FIMSCMAKE_EXPORT_H

#ifdef FIMSCMAKE_STATIC_DEFINE
#  define FIMSCMAKE_EXPORT
#  define FIMSCMAKE_NO_EXPORT
#else
#  ifndef FIMSCMAKE_EXPORT
#    ifdef FIMSCmake_EXPORTS
        /* We are building this library */
#      define FIMSCMAKE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define FIMSCMAKE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef FIMSCMAKE_NO_EXPORT
#    define FIMSCMAKE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef FIMSCMAKE_DEPRECATED
#  define FIMSCMAKE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef FIMSCMAKE_DEPRECATED_EXPORT
#  define FIMSCMAKE_DEPRECATED_EXPORT FIMSCMAKE_EXPORT FIMSCMAKE_DEPRECATED
#endif

#ifndef FIMSCMAKE_DEPRECATED_NO_EXPORT
#  define FIMSCMAKE_DEPRECATED_NO_EXPORT FIMSCMAKE_NO_EXPORT FIMSCMAKE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef FIMSCMAKE_NO_DEPRECATED
#    define FIMSCMAKE_NO_DEPRECATED
#  endif
#endif

#endif /* FIMSCMAKE_EXPORT_H */
