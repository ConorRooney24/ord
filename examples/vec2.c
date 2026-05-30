#include <ord/vec2.h>
#include <stdio.h>

int main(void)
{
    Vec2_f a;
    a.x = 123.456f;
    a.y = 654.321f;

    printf("x: %f, y: %f\n", a.x, a.y);
}