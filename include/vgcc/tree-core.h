#pragma once
#include "vgcc/vgcc-config.h"

#if HAS_VGCC_VERSION(4, 9)
#include "vgcc/vgcc-begin.h"
#include <tree-core.h>
#include "vgcc/vgcc-end.h"
#endif

#if !HAS_VGCC_VERSION(4, 9)
#define OMP_CLAUSE_SCHEDULE_LAST ((enum omp_clause_schedule_kind)5)
#define OMP_CLAUSE_DEFAULT_LAST ((enum omp_clause_default_kind)5)
#endif
