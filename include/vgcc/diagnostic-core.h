#pragma once
#include "vgcc/vgcc-config.h"

#ifndef VGCC_NO_LANG_HACKS
// See the #error
#include "vgcc/cp/cp-tree.h"
#endif

#if HAS_VGCC_VERSION(4, 6)
#include "vgcc/vgcc-begin.h"
#include <diagnostic-core.h>
#include "vgcc/vgcc-end.h"
#endif
