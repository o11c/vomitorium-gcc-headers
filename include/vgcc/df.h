#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/basic-block.h"
#include "vgcc/tm.h"

#if HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <df.h>
#include "vgcc/vgcc-end.h"
#endif
