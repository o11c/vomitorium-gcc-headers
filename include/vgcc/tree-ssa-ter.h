#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/tree-ssa-live.h"

// struct is missing in 4.9; header is missing since 5
#if (0 && HAS_VGCC_VERSION(4, 9)) || HAS_VGCC_VERSION(9)
#include "vgcc/vgcc-begin.h"
#include <tree-ssa-ter.h>
#include "vgcc/vgcc-end.h"
#endif
