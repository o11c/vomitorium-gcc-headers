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

// Internal to c-decl.c, but included in tree_size() so we need to dump it.
// It hasn't changed since 4.5 so we're probably good.
struct GTY((chain_next ("%h.prev"))) c_binding {
  union GTY(()) {              /* first so GTY desc can use decl */
    tree GTY((tag ("0"))) type; /* the type in this scope */
    struct c_label_vars * GTY((tag ("1"))) label; /* for warnings */
  } GTY((desc ("TREE_CODE (%0.decl) == LABEL_DECL"))) u;
  tree decl;                   /* the decl bound */
  tree id;                     /* the identifier it's bound to */
  struct c_binding *prev;      /* the previous decl in this scope */
  struct c_binding *shadowed;  /* the innermost decl shadowed by this one */
  unsigned int depth : 28;      /* depth of this scope */
  BOOL_BITFIELD invisible : 1;  /* normal lookup should ignore this binding */
  BOOL_BITFIELD nested : 1;     /* do not set DECL_CONTEXT when popping */
  BOOL_BITFIELD inner_comp : 1; /* incomplete array completed in inner scope */
  BOOL_BITFIELD in_struct : 1; /* currently defined as struct field */
  location_t locus;            /* location for nested bindings */
};
#define lang_identifier c_lang_identifier
struct GTY(()) lang_identifier {
  struct c_common_identifier common_id;
  struct c_binding *symbol_binding; /* vars, funcs, constants, typedefs */
  struct c_binding *tag_binding;    /* struct/union/enum tags */
  struct c_binding *label_binding;  /* labels */
};
#undef lang_identifier

#endif
