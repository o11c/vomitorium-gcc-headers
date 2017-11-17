#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/function.h"
#include "vgcc/gimple.h"
#include "vgcc/tree-ssa-alias.h"
#include "vgcc/tree-ssa-operands.h"

#if HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <gimple-ssa.h>
#include "vgcc/vgcc-end.h"
#endif
