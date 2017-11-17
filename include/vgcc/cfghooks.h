#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/basic-block.h"
#include "vgcc/coretypes.h"
#include "vgcc/predict.h"
#include "vgcc/sbitmap.h"
#include "vgcc/vec.h"

// exists primordially, but missing #include guards
#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <cfghooks.h>
#include "vgcc/vgcc-end.h"
#endif
