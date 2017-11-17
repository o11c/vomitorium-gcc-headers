#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/symbol-summary.h"

#if HAS_VGCC_VERSION(6) && !HAS_VGCC_VERSION(7)
#include "vgcc/vgcc-begin.h"
#include <hsa.h>
#include "vgcc/vgcc-end.h"
#endif
