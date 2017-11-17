#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/c-family/c-common.h"

#ifndef VGCC_NO_LANG_HACKS
#define cdk_id c_cdk_id
#define cdk_function c_cdk_function
#define cdk_array c_cdk_array
#define cdk_pointer c_cdk_pointer
#define cdk_attrs c_cdk_attrs
#endif

#if HAS_VGCC_VERSION(4, 7)
#include "vgcc/vgcc-begin.h"
#include <c-tree.h>
#include "vgcc/vgcc-end.h"

#ifndef VGCC_NO_LANG_HACKS
__attribute__((unused))
static int& c_current_function_returns_value = current_function_returns_value;
__attribute__((unused))
static int& c_current_function_returns_null = current_function_returns_null;
__attribute__((unused))
static int& c_current_function_returns_abnormally = current_function_returns_abnormally;
#pragma GCC poison current_function_returns_value
#pragma GCC poison current_function_returns_null
#pragma GCC poison current_function_returns_abnormally
#endif
#endif

#ifndef VGCC_NO_LANG_HACKS
#undef cdk_id
#undef cdk_function
#undef cdk_array
#undef cdk_pointer
#undef cdk_attrs
#endif
