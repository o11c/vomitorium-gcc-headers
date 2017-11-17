#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/vec.h"

#if HAS_VGCC_VERSION(4, 6) && !HAS_VGCC_VERSION(4, 8)
#include "vgcc/vgcc-begin.h"
#include <vecir.h>
#include "vgcc/vgcc-end.h"
#endif
