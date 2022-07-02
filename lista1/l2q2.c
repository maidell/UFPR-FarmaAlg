/* Make a program that presents the numbers from 1 to 10,
with each number printed on a line and the odd numbers shifted
to the right. */

#include <stdio.h>

int main(void)
{
    int n;
    int par;
    int impar;


    n = 1;

    while (n <= 10)
    {
        if (!(n % 2 == 0))
        {
            impar = n;
            printf("\t%d\n", impar);

        }
        if (n % 2 == 0)
        {
            par = n;
            printf("%d\n", par);
        }

        n++;
    }

}
