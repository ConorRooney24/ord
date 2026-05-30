#include "../include/ord.h"
#include <stdio.h>

int main(void)
{
    Vec3_f a;
    a.x = 123.456f;
    a.y = 654.321f;
    a.z = 123.321f;

    printf("x: %f, y: %f, z: %f\n", a.x, a.y, a.z);
}