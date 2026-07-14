#ifndef VEC3_H
#define VEC3_H

#include <stdint.h>

#define ORD_VEC3_DECL(T, Name) \
typedef struct Name            \
{                              \
    T x, y, z;                 \
} Name;                        \

#endif
