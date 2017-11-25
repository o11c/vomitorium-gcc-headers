#pragma once
#include "vgcc/vgcc-config.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <plugin-version.h>
#include "vgcc/vgcc-end.h"
#endif

#ifdef GCCPLUGIN_VERSION
# if VGCC_MAJOR != GCCPLUGIN_VERSION_MAJOR
#  error "PLUGIN_CC mismatch? (major version)"
# endif
# if VGCC_MINOR != GCCPLUGIN_VERSION_MINOR
#  error "PLUGIN_CC mismatch? (minor version)"
# endif
// buggy through 4.9 - shows the float MAJOR.MINOR instead
# if HAS_VGCC_VERSION(5)
#  if VGCC_PATCH != GCCPLUGIN_VERSION_PATCHLEVEL
#   error "PLUGIN_CC mismatch? (patch version)"
#  endif
# endif
#else
# define GCCPLUGIN_VERSION (1000 * VGCC_MAJOR + VGCC_MINOR)
#endif

// Except we shouldn't use that anyway, so ...
#undef GCCPLUGIN_VERSION
#pragma GCC poison GCCPLUGIN_VERSION
