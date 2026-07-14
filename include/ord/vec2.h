#ifndef VEC2_H
#define VEC2_H

#include <stdint.h>

#define ORD_VEC2_DECL(T, Name) \
typedef struct Name            \
{                              \
    T x, y;                    \
} Name;                        \

#endif
