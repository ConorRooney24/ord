#ifndef DA_H
#define DA_H

#include <stdlib.h>

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

#endif
