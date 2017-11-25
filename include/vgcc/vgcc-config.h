#pragma once

#include "vgcc/vgcc-version-check.h"

#if !HAS_VGCC_VERSION(4, 5)
# error "Too old to have plugin headers!"
#endif

// Problem: libstdc++ headers require things that GCC poisons.

#include <cstdlib>

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

#ifndef VGCC_NO_PLUGIN
// this must be included first, always
// (except in really weird cases)
# include "vgcc/gcc-plugin.h"
#endif
