#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/cgraph.h"

// exists as of 4.6, but missing #include guards
#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <ipa-ref.h>
#include "vgcc/vgcc-end.h"
#endif
