#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/tree.h"

// broken inline functions - need additional declarations
#if (0 && HAS_VGCC_VERSION(4, 9)) || HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <tree-dfa.h>
#include "vgcc/vgcc-end.h"
#endif
