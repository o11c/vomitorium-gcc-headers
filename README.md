Fixed GCC plugin headers.

There is no makefile or installation instructions, since this is
intended to be embedded (as a git submodule) in another project, and
you are expected to know what you are doing.

To find optional behavior, use:

    rgrep 'if.* VGCC' include/vgcc

Last updated for:

    gcc-8 (Debian 8-20171023-1) 8.0.0 20171023 (experimental) [trunk revision 253997]
