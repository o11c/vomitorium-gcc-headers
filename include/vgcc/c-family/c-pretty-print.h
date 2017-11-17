#pragma once
#include "vgcc/vgcc-config.h"

#if HAS_VGCC_VERSION(4, 6)
#include "vgcc/vgcc-begin.h"
#include <c-family/c-pretty-print.h>
#include "vgcc/vgcc-end.h"
#else
#include "vgcc/vgcc-begin.h"
#include <c-pretty-print.h>
#include "vgcc/vgcc-end.h"
#endif
