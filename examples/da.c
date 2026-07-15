#include <ord/da.h>
#include <stdio.h>

ORD_DA_INIT(int, da_i)

int main(void)
{
    da_i dynamic_array = da_i_init();

    printf("--- Adding Values ---\n");
    for (int i = 1; i <= 10; i++)
    {
        da_i_push(&dynamic_array, i*i);
        printf("Adding %d...\n", i*i);
    }

    printf("\n--- Removing Values ---\n");
    for (size_t i = 0; i < dynamic_array.count; i += 2)
    {
        da_i_remove(&dynamic_array, i);
        printf("Removing %d from index %zu...\n", dynamic_array.data[i], i);
    }

    printf("\n--- Inserting Values ---\n");
    for (size_t i = 0; i < dynamic_array.count; i+=3)
    {
        da_i_insert(&dynamic_array, i, (int)i+1+1);
        printf("Inserting %d at index %zu...\n", (int)i+1+1, i);
    }

    printf("\n--- Reading Values ---\n");
    for (size_t i = 0; i < dynamic_array.count; i++)
    {
        printf("%zu: %d\n", i, dynamic_array.data[i]);
    }

    da_i_destroy(&dynamic_array);

    return 0;
}
