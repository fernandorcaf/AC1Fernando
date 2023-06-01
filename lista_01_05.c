#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 3;
    float b = a / 2;
    float c1 = b + 3.1;
    float c2 = (int) b + 3.1;
    int c3 = b + 3.1;
    printf("%.1f\n", c1);
    printf("%.1f\n", c2);
    printf("%d\n", c3);

    return 0;
}
