#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/gimple.h"
#include "vgcc/gimple-ssa.h"
#include "vgcc/tree-core.h"
#include "vgcc/tree-phinodes.h"
#include "vgcc/tree-ssa-operands.h"

#if HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <ssa-iterators.h>
#include "vgcc/vgcc-end.h"
#endif
