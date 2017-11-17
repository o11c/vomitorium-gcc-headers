#pragma once
#include "vgcc/vgcc-config.h"

// missing macro
#if (0 && HAS_VGCC_VERSION(5)) || HAS_VGCC_VERSION(9)
#include "vgcc/vgcc-begin.h"
#include <lra-int.h>
#include "vgcc/vgcc-end.h"
#endif
