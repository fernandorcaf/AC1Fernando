#include <stdio.h>

int main() {
    int i = 3;
    int j = 5;
    int *p;
    int *q;

    p = &i;
    q = &j;

    printf("%d\n", p == &i);
    printf("%d\n", *p - *q);
    printf("%d\n", **&p);
    printf("%d\n", 3* -*p / (*q) + 7);
    return 0;
}
