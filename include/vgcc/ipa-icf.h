#pragma once
#include "vgcc/vgcc-config.h"

#include <list>

#include "vgcc/bitmap.h"
#include "vgcc/cgraph.h"
#include "vgcc/except.h"
#include "vgcc/ipa-icf-gimple.h"
#include "vgcc/tree-cfg.h"

#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <ipa-icf.h>
#include "vgcc/vgcc-end.h"
#endif
