#ifndef DA_H
#define DA_H

#include <stdlib.h>
#include <stdint.h>

#define ORD_DA_DECL(T, Name)                         \
typedef struct Name                                  \
{                                                    \
    T *data;                                         \
    size_t count;                                    \
    size_t capacity;                                 \
} Name;                                              \
                                                     \
Name Name##_init(void);                              \
void Name##_destroy(Name *da);                       \
void Name##_reserve(Name *da, size_t new_cap);       \
void Name##_push(Name *da, T value);                 \
T Name##_pop(Name *da);                              \
void Name##_insert(Name *da, size_t index, T value); \
void Name##_remove(Name *da, size_t index);

ORD_DA_DECL(int, da_i)
ORD_DA_DECL(int8_t, da_i8)
ORD_DA_DECL(int16_t, da_i16)
ORD_DA_DECL(int32_t, da_i32)
ORD_DA_DECL(int64_t, da_i64)

ORD_DA_DECL(uint8_t, da_u8)
ORD_DA_DECL(uint16_t, da_u16)
ORD_DA_DECL(uint32_t, da_u32)
ORD_DA_DECL(uint64_t, da_u64)

ORD_DA_DECL(float, da_f)
ORD_DA_DECL(double, da_d)

#endif