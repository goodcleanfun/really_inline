#ifndef REALLY_INLINE_H
#define REALLY_INLINE_H

#include <stddef.h>
#include <stdint.h>

#ifndef _WIN32
#define really_inline inline __attribute__((always_inline))
#else
#define really_inline __forceinline
#endif

#endif