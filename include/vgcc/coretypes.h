#pragma once
#include "vgcc/vgcc-config.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <coretypes.h>
#include "vgcc/vgcc-end.h"
#endif

#if !HAS_VGCC_VERSION(6)
typedef gimple gimple_ptr;
typedef const_gimple const_gimple_ptr;
#else
typedef gimple *gimple_ptr;
typedef const gimple *const_gimple_ptr;
#endif
