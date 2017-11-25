#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/double-int.h"
#include "vgcc/statistics.h"
#include "vgcc/tree-core.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <tree.h>
#include "vgcc/vgcc-end.h"
#endif

#if !HAS_VGCC_VERSION(4, 6)
# define TYPE_SYMTAB_IS_ADDRESS 0
# define TYPE_SYMTAB_IS_POINTER 1
# define TYPE_SYMTAB_IS_DIE 2
# define DEBUG_HOOKS_TREE_TYPE_SYMTAB_FIELD (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
#else
# define DEBUG_HOOKS_TREE_TYPE_SYMTAB_FIELD (debug_hooks->tree_type_symtab_field)
#endif

#if !HAS_VGCC_VERSION(4, 7)
# define CALL_ALLOCA_FOR_VAR_P ALLOCA_FOR_VAR_P
# define builtin_decl_implicit(i) (implicit_built_in_decls[i])
# define builtin_decl_explicit(i) (built_in_decls[i])
#endif

#if !HAS_VGCC_VERSION(4, 8)
# define TREE_SET_BLOCK(T, OBJ) (TREE_BLOCK(T) = (OBJ))
# define SSA_NAME_VAR_OR_IDENTIFIER SSA_NAME_VAR
# define SET_SSA_NAME_VAR_OR_IDENTIFIER(T, OBJ) (SSA_NAME_VAR_OR_IDENTIFIER(T) = (OBJ))
#else
# define SSA_NAME_VAR_OR_IDENTIFIER(NODE) (SSA_NAME_VAR(NODE) ?: SSA_NAME_IDENTIFIER(NODE))
#endif

#if !HAS_VGCC_VERSION(4, 9)
# define get_tree_code_name(code) tree_code_name[code]
#endif

#if !HAS_VGCC_VERSION(5)
# define OMP_CLAUSE_SET_MAP_KIND(T, OBJ) (OMP_CLAUSE_MAP_KIND(T) = (OBJ))
# define DECL_ABSTRACT_P DECL_ABSTRACT
#else
// copied from include/gomp-constants.h
#define GOMP_MAP_LAST                       (1 << 8)
#define GOMP_MAP_FLAG_TO                    (1 << 0)
#define GOMP_MAP_FLAG_FROM                  (1 << 1)
#define GOMP_MAP_FLAG_SPECIAL_0             (1 << 2)
#define GOMP_MAP_FLAG_SPECIAL_1             (1 << 3)
#define GOMP_MAP_FLAG_SPECIAL_2             (1 << 4)
#define GOMP_MAP_FLAG_SPECIAL               (GOMP_MAP_FLAG_SPECIAL_1 | GOMP_MAP_FLAG_SPECIAL_0)
#define GOMP_MAP_FLAG_FORCE                 (1 << 7)

enum gomp_map_kind
{
    GOMP_MAP_ALLOC =                        0,
    GOMP_MAP_TO =                           (GOMP_MAP_ALLOC | GOMP_MAP_FLAG_TO),
    GOMP_MAP_FROM =                         (GOMP_MAP_ALLOC | GOMP_MAP_FLAG_FROM),
    GOMP_MAP_TOFROM =                       (GOMP_MAP_TO | GOMP_MAP_FROM),
    GOMP_MAP_POINTER =                      (GOMP_MAP_FLAG_SPECIAL_0 | 0),
    GOMP_MAP_TO_PSET =                      (GOMP_MAP_FLAG_SPECIAL_0 | 1),
    GOMP_MAP_FORCE_PRESENT =                (GOMP_MAP_FLAG_SPECIAL_0 | 2),
    GOMP_MAP_FORCE_DEALLOC =                (GOMP_MAP_FLAG_SPECIAL_0 | 3),
    GOMP_MAP_DELETE =                       (GOMP_MAP_FLAG_SPECIAL_0 | 3),
    GOMP_MAP_FORCE_DEVICEPTR =              (GOMP_MAP_FLAG_SPECIAL_1 | 0),
    GOMP_MAP_DEVICE_RESIDENT =              (GOMP_MAP_FLAG_SPECIAL_1 | 1),
    GOMP_MAP_LINK =                         (GOMP_MAP_FLAG_SPECIAL_1 | 2),
    GOMP_MAP_FIRSTPRIVATE =                 (GOMP_MAP_FLAG_SPECIAL | 0),
    GOMP_MAP_FIRSTPRIVATE_INT =             (GOMP_MAP_FLAG_SPECIAL | 1),
    GOMP_MAP_USE_DEVICE_PTR =               (GOMP_MAP_FLAG_SPECIAL | 2),
    GOMP_MAP_ZERO_LEN_ARRAY_SECTION =       (GOMP_MAP_FLAG_SPECIAL | 3),
    GOMP_MAP_FORCE_ALLOC =                  (GOMP_MAP_FLAG_FORCE | GOMP_MAP_ALLOC),
    GOMP_MAP_FORCE_TO =                     (GOMP_MAP_FLAG_FORCE | GOMP_MAP_TO),
    GOMP_MAP_FORCE_FROM =                   (GOMP_MAP_FLAG_FORCE | GOMP_MAP_FROM),
    GOMP_MAP_FORCE_TOFROM =                 (GOMP_MAP_FLAG_FORCE | GOMP_MAP_TOFROM),
    GOMP_MAP_ALWAYS_TO =                    (GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_TO),
    GOMP_MAP_ALWAYS_FROM =                  (GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_FROM),
    GOMP_MAP_ALWAYS_TOFROM =                (GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_TOFROM),
    GOMP_MAP_STRUCT =                       (GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_FLAG_SPECIAL | 0),
    GOMP_MAP_ALWAYS_POINTER =               (GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_FLAG_SPECIAL | 1),
    GOMP_MAP_DELETE_ZERO_LEN_ARRAY_SECTION =(GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_FLAG_SPECIAL | 3),
    GOMP_MAP_RELEASE =                      (GOMP_MAP_FLAG_SPECIAL_2 | GOMP_MAP_DELETE),
    GOMP_MAP_FIRSTPRIVATE_POINTER =         (GOMP_MAP_LAST | 1),
    GOMP_MAP_FIRSTPRIVATE_REFERENCE =       (GOMP_MAP_LAST | 2),

    GOMP_MAP__ARRAY_LAST_ = 512 // not originally present
};
#endif

#if !HAS_VGCC_VERSION(4, 7)
# define TYPE_MODE_RAW(NODE) (TYPE_CHECK (NODE)->type.mode)
#elif !HAS_VGCC_VERSION(6)
# define TYPE_MODE_RAW(NODE) (TYPE_CHECK (NODE)->type_common.mode)
#endif
#if !HAS_VGCC_VERSION(6)
# define TREE_OPTIMIZATION_REALLY(NODE) (*(TREE_OPTIMIZATION(NODE)))
# define TREE_TARGET_OPTION_REALLY(NODE) (*(TREE_TARGET_OPTION(NODE)))
#else
# define TREE_OPTIMIZATION_REALLY(NODE) TREE_OPTIMIZATION(NODE)
# define TREE_TARGET_OPTION_REALLY(NODE) TREE_TARGET_OPTION(NODE)
#endif

#if !HAS_VGCC_VERSION(7)
# define SET_TYPE_ALIGN(NODE, X) (TYPE_ALIGN(NODE) = (X))
# define SET_DECL_ALIGN(NODE, X) (DECL_ALIGN(NODE) = (X))
#endif

#if !HAS_VGCC_VERSION(8)
#else
#define TYPE_MINVAL TYPE_MIN_VALUE_RAW
#define TYPE_MAXVAL TYPE_MAX_VALUE_RAW
#endif

// For macro bodies
#include "vgcc/stor-layout.h"
