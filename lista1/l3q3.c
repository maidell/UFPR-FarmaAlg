/* Make a program that reads an integer N and presents
a chessboard with NxN squares. For the white squares
use only a '1' symbol and for the black ones only a
'0' symbol. */

#include <stdio.h>

int par(int value)
{
    return(value % 2 == 0);
}

int main(void)
{
    int n;
    int white;
    int black;
    int line;
    int column;

    white = 1;
    black = 0;

    scanf("%d", &n);

    line = 0;
    while (line < n)
    {
        if (par(line))
        {
            column = 0;
            while (column < n)
            {
                if (par(column))
                    printf("%d", black);
                else if (!par(column))
                    printf("%d", white);
                column++;

            }
        }
        if (!par(line))
        {
            column = 0;
            while (column < n)
            {
                if (!par(column))
                    printf("%d", black);
                else if (par(column))
                    printf("%d", white);
                column++;

            }
        }
        line++;
        printf("\n");
    }
}
