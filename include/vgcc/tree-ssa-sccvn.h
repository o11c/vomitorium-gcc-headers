#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/coretypes.h"
#include "vgcc/gimple.h"
#include "vgcc/tree.h"
#include "vgcc/tree-ssa-alias.h"
#include "vgcc/tree-ssanames.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <tree-ssa-sccvn.h>
#include "vgcc/vgcc-end.h"
#endif
