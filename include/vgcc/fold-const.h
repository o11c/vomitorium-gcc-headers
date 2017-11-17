#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/input.h"
#include "vgcc/statistics.h"
#include "vgcc/tree-core.h"

#if HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <fold-const.h>
#include "vgcc/vgcc-end.h"
#endif
