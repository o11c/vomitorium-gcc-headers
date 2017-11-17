#pragma once
#include "vgcc/vgcc-config.h"

// missing header
#if (0 && HAS_VGCC_VERSION(5)) || HAS_VGCC_VERSION(6)
#include "vgcc/vgcc-begin.h"
#include <sched-int.h>
#include "vgcc/vgcc-end.h"
#endif
