#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/graphite-poly.h"

#if HAS_VGCC_VERSION(5) && !HAS_VGCC_VERSION(6)
#include "vgcc/vgcc-begin.h"
#include <graphite-isl-ast-to-gimple.h>
#include "vgcc/vgcc-end.h"
#endif
