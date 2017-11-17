#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/coretypes.h"
#include "vgcc/input.h"

#if HAS_VGCC_VERSION(4, 6)
#include "vgcc/vgcc-begin.h"
#include <c-family/c-pragma.h>
#include "vgcc/vgcc-end.h"
#else
#include "vgcc/vgcc-begin.h"
#include <c-pragma.h>
#include "vgcc/vgcc-end.h"
#endif
