#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/coretypes.h"

#if !HAS_VGCC_VERSION(4, 6)
#include "vgcc/vgcc-begin.h"
#include <varray.h>
#include "vgcc/vgcc-end.h"
#endif
