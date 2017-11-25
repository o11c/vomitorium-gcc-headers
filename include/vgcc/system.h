#pragma once
#include "vgcc/vgcc-config.h"

#include "vgcc/config.h"
#include "vgcc/safe-ctype.h"

#if HAS_VGCC_VERSION(0)
#include "vgcc/vgcc-begin.h"
#include <system.h>
#include "vgcc/vgcc-end.h"
#endif

/*
    GCC redefines abort() to call fancy_abort().

    Unfortunately, fancy_abort() calls exit(), which in turn
    calls all the atexit() handlers, which includes calling destructors for
    shared libraries.

    This is not only confusing, but DANGEROUS once any code has entered a
    state in which it decides to call abort().

    Last confirmed for GCC 6, but trunk visually looks the same.
*/
#undef abort
/*
    Additionally, it installs a signal handler that isn't safe.

    This loses information, but if you ICE the plugin you should probably
    use GDB at that point anyway.
*/
#include <csignal>
__attribute__((constructor))
static void reset_sigabort()
{
    signal(SIGABRT, SIG_DFL);
}
