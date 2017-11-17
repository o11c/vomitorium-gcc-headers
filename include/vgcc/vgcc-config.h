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

#if !HAS_VGCC_VERSION(4, 5)
# error "Too old to have plugin headers!"
#endif

// Problem: ISL headers require things that GCC poisons.
// How the fuck did that ever work?
#ifndef VGCC_NO_ISL
# if HAS_VGCC_VERSION(5)
#  pragma GCC visibility push(default)
#  include <isl/aff_type.h>
#  include <isl/arg.h>
#  include <isl/constraint.h>
#  include <isl/map.h>
#  include <isl/map_type.h>
#  include <isl/set.h>
#  include <isl/union_map_type.h>
#  pragma GCC visibility pop
# endif
#endif

// Problem: 4.7 could be configured either way, and there's no way to
// tell. However, most distros configured as C++, so just default to that.
// If you really need otherwise, just -D this.
#ifndef VGCC_IS_C
# define VGCC_IS_C (!HAS_VGCC_VERSION(4, 7))
#endif

// TODO remove before commit
#pragma GCC poison state_t
#pragma GCC poison MAX_RECOG_OPERANDS

#ifndef VGCC_NO_PLUGIN
# include "vgcc/vgcc-begin.h"
// this must be included first, always
// (except in really weird cases)
# include <gcc-plugin.h>
# include "vgcc/vgcc-end.h"
#endif
