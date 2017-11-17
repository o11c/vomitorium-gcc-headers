#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/double-int.h"
#include "vgcc/function.h"
#include "vgcc/stringpool.h"
#include "vgcc/tree-ssa-alias.h"
#include "vgcc/tree-vrp.h"
#include "vgcc/tree.h"

#if HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <tree-ssanames.h>
#include "vgcc/vgcc-end.h"
#endif
