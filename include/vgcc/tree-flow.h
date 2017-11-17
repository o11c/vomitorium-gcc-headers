#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/bitmap.h"
#include "vgcc/hard-reg-set.h"

#if !HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <tree-flow.h>
#include "vgcc/vgcc-end.h"
#endif
