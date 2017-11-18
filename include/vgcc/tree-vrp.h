#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/ssa.h"

// missing include guards, already included from ssa.h
#if (0 && HAS_VGCC_VERSION(7)) || HAS_VGCC_VERSION(8)
#include "vgcc/vgcc-begin.h"
#include <tree-vrp.h>
#include "vgcc/vgcc-end.h"
#endif
