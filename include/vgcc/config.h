// NOT #pragma once - circular includes
#include "vgcc/vgcc-config.h"

#ifndef IN_GCC
# define IN_GCC
#endif

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <config.h>
#include "vgcc/vgcc-end.h"
#endif
