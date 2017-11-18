#pragma once
//#define VGCC_NO_PLUGIN
#include "vgcc/vgcc-config.h"

#ifndef VGCC_NO_LANG_HACKS
#define debug debug_notactuallyexported_avoid_collision
#endif

#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <collect-utils.h>
#include "vgcc/vgcc-end.h"
#endif

#ifndef VGCC_NO_LANG_HACKS
#undef debug
#endif
