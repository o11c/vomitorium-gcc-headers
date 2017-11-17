#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/tree.h"

#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <cilk.h>
#include "vgcc/vgcc-end.h"
#endif
