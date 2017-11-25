#pragma once
#include "vgcc/vgcc-config.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <safe-ctype.h>
#include "vgcc/vgcc-end.h"
#endif

// safe-ctype tries to kill these, but libstdc++ needs them
#undef isalpha
#undef isalnum
#undef iscntrl
#undef isdigit
#undef isgraph
#undef islower
#undef isprint
#undef ispunct
#undef isspace
#undef isupper
#undef isxdigit
#undef toupper
#undef tolower
