#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/statistics.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <vec.h>
#include "vgcc/vgcc-end.h"
#endif

#if HAS_GCC_VERSION(4, 8)
# define VEC(T, A) vec<T, va_##A>
#endif
