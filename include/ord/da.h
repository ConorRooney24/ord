#ifndef DA_H
#define DA_H

#include <stdlib.h>
#include <string.h>

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

#define ORD_DA_IMPL(T, Name)                                                              \
Name Name##_init(void)                                                                    \
{                                                                                         \
    Name da;                                                                              \
    da.data = NULL;                                                                       \
    da.count = 0;                                                                         \
    da.capacity = 0;                                                                      \
    return da;                                                                            \
}                                                                                         \
                                                                                          \
void Name##_destroy(Name *da)                                                             \
{                                                                                         \
    if (!da) return;                                                                      \
    free(da->data);                                                                       \
    da->data = NULL;                                                                      \
    da->count = 0;                                                                        \
    da->capacity = 0;                                                                     \
}                                                                                         \
                                                                                          \
void Name##_reserve(Name *da, size_t new_cap)                                             \
{                                                                                         \
    if (!da || new_cap <= da->capacity) return;                                           \
                                                                                          \
    void *ptr = realloc(da->data, new_cap * sizeof(T));                                   \
    if (!ptr) return;                                                                     \
                                                                                          \
    da->data = (T *)ptr;                                                                  \
    da->capacity = new_cap;                                                               \
}                                                                                         \
                                                                                          \
void Name##_push(Name *da, T value)                                                       \
{                                                                                         \
    if (!da) return;                                                                      \
                                                                                          \
    if (da->count == da->capacity)                                                        \
    {                                                                                     \
    }                                                                                     \
        size_t new_cap = da->capacity ? da->capacity * 2 : 1;                             \
        Name##_reserve(da, new_cap);                                                      \
                                                                                          \
    da->data[da->count++] = value;                                                        \
}                                                                                         \
                                                                                          \
T Name##_pop(Name *da)                                                                    \
{                                                                                         \
    if (!da || da->count == 0) return (T){0};                                             \
                                                                                          \
    return da->data[--da->count];                                                         \
}                                                                                         \
                                                                                          \
void Name##_insert(Name *da, size_t index, T value)                                       \
{                                                                                         \
    if (!da) return;                                                                      \
                                                                                          \
    if (index > da->count) index = da->count;                                             \
                                                                                          \
    if (da->count >= da->capacity)                                                        \
    {                                                                                     \
        size_t new_cap = da->capacity ? da->capacity * 2 : 1;                             \
        Name##_reserve(da, new_cap);                                                      \
    }                                                                                     \
                                                                                          \
    memmove(&da->data[index + 1], &da->data[index], (da->count - index) * sizeof(T));     \
    da->data[index] = value;                                                              \
    da->count++;                                                                          \
}                                                                                         \
                                                                                          \
void Name##_remove(Name *da, size_t index)                                                \
{                                                                                         \
    if (!da || index >= da->count) return;                                                \
                                                                                          \
    memmove(&da->data[index], &da->data[index + 1], (da->count - index - 1) * sizeof(T)); \
    da->count--;                                                                          \
}

#endif
