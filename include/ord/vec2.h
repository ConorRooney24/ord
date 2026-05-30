#ifndef VEC2_H
#define VEC2_H

#include <stdint.h>

#define ORD_VEC2_DECL(T, Name) \
typedef struct Name            \
{                              \
    T x, y;                    \
} Name;                        \

ORD_VEC2_DECL(int, Vec2_i)
ORD_VEC2_DECL(int8_t, Vec2_i8)
ORD_VEC2_DECL(int16_t, Vec2_i16)
ORD_VEC2_DECL(int32_t, Vec2_i32)
ORD_VEC2_DECL(int64_t, Vec2_i64)

ORD_VEC2_DECL(uint8_t, Vec2_u8)
ORD_VEC2_DECL(uint16_t, Vec2_u16)
ORD_VEC2_DECL(uint32_t, Vec2_u32)
ORD_VEC2_DECL(uint64_t, Vec2_u64)

ORD_VEC2_DECL(float, Vec2_f)
ORD_VEC2_DECL(double, Vec2_d)

#endif