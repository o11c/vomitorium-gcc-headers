#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/basic-block.h"
#include "vgcc/cfgloop.h"
#include "vgcc/gimple.h"
#include "vgcc/gimple-iterator.h"
#include "vgcc/tree-data-ref.h"
#include "vgcc/tree-ssa-loop.h"

#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <sese.h>
#include "vgcc/vgcc-end.h"
#endif
