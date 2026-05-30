#ifndef VEC3_H
#define VEC3_H

#include <stdint.h>

#define ORD_VEC3_DECL(T, Name) \
typedef struct Name            \
{                              \
    T x, y, z;                 \
} Name;                        \

ORD_VEC3_DECL(int, Vec3_i)
ORD_VEC3_DECL(int8_t, Vec3_i8)
ORD_VEC3_DECL(int16_t, Vec3_i16)
ORD_VEC3_DECL(int32_t, Vec3_i32)
ORD_VEC3_DECL(int64_t, Vec3_i64)

ORD_VEC3_DECL(uint8_t, Vec3_u8)
ORD_VEC3_DECL(uint16_t, Vec3_u16)
ORD_VEC3_DECL(uint32_t, Vec3_u32)
ORD_VEC3_DECL(uint64_t, Vec3_u64)

ORD_VEC3_DECL(float, Vec3_f)
ORD_VEC3_DECL(double, Vec3_d)

#endif