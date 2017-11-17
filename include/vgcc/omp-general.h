#pragma once
#include "vgcc/vgcc-config.h"

// missing header
#if (0 && HAS_VGCC_VERSION(7)) || HAS_VGCC_VERSION(9)
#include "vgcc/vgcc-begin.h"
#include <omp-general.h>
#include "vgcc/vgcc-end.h"
#endif
