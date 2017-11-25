#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/function.h"
#include "vgcc/statistics.h"

#ifndef VGCC_NO_LANG_HACKS
#define cdk_id cxx_cdk_id
#define cdk_function cxx_cdk_function
#define cdk_array cxx_cdk_array
#define cdk_pointer cxx_cdk_pointer
#define cdk_reference cxx_cdk_reference
#define cdk_ptrmem cxx_cdk_ptrmem
#define cdk_error cxx_cdk_error

// TODO: also needs to be defined if you use LANG_IDENTIFIER_CAST
#define lang_identifier cxx_lang_identifier
#endif

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <cp/cp-tree.h>
#include "vgcc/vgcc-end.h"
#endif

#ifndef VGCC_NO_LANG_HACKS
#undef current_function_returns_value
#undef current_function_returns_null
#undef current_function_returns_abnormally
#define cxx_current_function_returns_value cp_function_chain->returns_value
#define cxx_current_function_returns_null cp_function_chain->returns_nnullull
#define cxx_current_function_returns_abnormally cp_function_chain->returns_abnormally

#undef cdk_id
#undef cdk_function
#undef cdk_array
#undef cdk_pointer
#undef cdk_reference
#undef cdk_ptrmem
#undef cdk_error

#undef lang_identifier
#endif
