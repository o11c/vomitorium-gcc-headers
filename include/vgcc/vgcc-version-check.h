#pragma once

#ifndef VGCC_NO_GENERATED_HEADER
// generated file
# include "vgcc/vgcc-version.h"
#endif

#define HAS_VGCC_VERSION_IMPL(major, minor, patch)  \
(                                                   \
    VGCC_MAJOR > (major) ||                         \
    (                                               \
        VGCC_MAJOR == (major) &&                    \
        (                                           \
            VGCC_MINOR > (minor) ||                 \
            (                                       \
                VGCC_MINOR == (minor) &&            \
                (                                   \
                    VGCC_PATCH >= (patch)           \
                )                                   \
            )                                       \
        )                                           \
    )                                               \
)
#define HAS_VGCC_VERSION_HELPER(major, minor, patch, ...)   \
    HAS_VGCC_VERSION_IMPL(major, minor, patch)
//TODO is there an easy way to check that we are passed 1-3 arguments?
#define HAS_VGCC_VERSION(...) HAS_VGCC_VERSION_HELPER(__VA_ARGS__, 0, 0)

#define HAS_GCC_VERSION_IMPL(major, minor, patch)   \
(                                                   \
    __GNUC__ > (major) ||                           \
    (                                               \
        __GNUC__ == (major) &&                      \
        (                                           \
            __GNUC_MINOR__ > (minor) ||             \
            (                                       \
                __GNUC_MINOR__ == (minor) &&        \
                (                                   \
                    __GNUC_PATCHLEVEL__ >= (patch)  \
                )                                   \
            )                                       \
        )                                           \
    )                                               \
)
#define HAS_GCC_VERSION_HELPER(major, minor, patch, ...)   \
    HAS_GCC_VERSION_IMPL(major, minor, patch)
//TODO is there an easy way to check that we are passed 1-3 arguments?
#define HAS_GCC_VERSION(...) HAS_GCC_VERSION_HELPER(__VA_ARGS__, 0, 0)

