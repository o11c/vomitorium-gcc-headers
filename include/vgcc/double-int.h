#pragma once
#include "vgcc/vgcc-config.h"

#include <gmp.h>

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <double-int.h>
#include "vgcc/vgcc-end.h"
#endif

#if HAS_VGCC_VERSION(4, 8)
# define double_int_negative_p(v) ((v).is_negative())
# define double_int_neg(v) (-(v))
# define double_int_fits_in_uhwi_p(v) ((v).fits_uhwi())
# define double_int_to_uhwi(v) ((v).to_uhwi())
#endif
