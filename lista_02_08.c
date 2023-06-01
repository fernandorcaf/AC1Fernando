#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yy, xxyy, cond = 0;
    int xx = 10;

    while (xx <= 99)
    {
        while(yy <= 99)
        {
            cond = xx + yy;
            xxyy = xx*100 + yy;
            if (cond * cond == xxyy)
            {
                printf("%d\n", xxyy);
            }
            yy += 1;
        }
        xx += 1;
        yy = 0;
    }
}
