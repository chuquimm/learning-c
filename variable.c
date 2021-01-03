#include <stdio.h>

// declarations
int a, b, c;

float f, g, h;

int main(int argc, char const *argv[])
{
    // initialization
    a = 23;
    b = 3;
    c = a + b;
    printf("Sum int: %d\n", c);

    f = 23.3;
    g = 3.3;
    h = f + g;
    printf("Sum float: %f\n", h);
    return 0;
}
