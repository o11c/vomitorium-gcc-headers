#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/coretypes.h"
// See the #error
#include "vgcc/cp/cp-tree.h"
#include "vgcc/tree.h"

#if HAS_VGCC_VERSION(4, 6)
#include "vgcc/vgcc-begin.h"
#include <c-family/c-common.h>
#include "vgcc/vgcc-end.h"
#else
#include "vgcc/vgcc-begin.h"
#include <c-common.h>
#include "vgcc/vgcc-end.h"
#endif
