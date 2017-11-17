#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/gimple.h"
#include "vgcc/gimple-iterator.h"
#include "vgcc/tree-chrec.h"
#include "vgcc/tree-data-ref.h"

#if HAS_VGCC_VERSION(5)
#include "vgcc/vgcc-begin.h"
#include <tree-vectorizer.h>
#include "vgcc/vgcc-end.h"
#endif
