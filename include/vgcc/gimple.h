#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/basic-block.h"
#include "vgcc/function.h"
#include "vgcc/gimple-expr.h"
#include "vgcc/input.h"
#include "vgcc/internal-fn.h"
#include "vgcc/is-a.h"
#include "vgcc/predict.h"
#include "vgcc/statistics.h"
#include "vgcc/tm.h"
#include "vgcc/tree.h"
#include "vgcc/tree-ssa-alias.h"
#include "vgcc/vec.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <gimple.h>
#include "vgcc/vgcc-end.h"
#endif
