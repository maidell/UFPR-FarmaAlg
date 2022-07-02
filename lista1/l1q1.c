/* Make a program that reads and displays the following 
information. Important, the program should not display 
any extra messages, no text should be sent to the 
standard output stream, so that farmaalg considers the
output correct. Each item must be presented on one line.

a) Read an integer value using scanf with %d and present 
that integer value using prinf with the %d.
b) Read a key using getchar and present with the value 
read with prinft with the formatting "%d %c\n"
c) Read a floating point number (scanf with %f) and present 
it with 2 digit precision (printf with %.2f).

Notice that the getchar function returns only one code, but waits for the enter key to be pressed.

Translated with www.DeepL.com/Translator (free version) */

#include <stdio.h>

int main(void)
{
    int num1;
    int tecla;
    float num2;

    scanf("%d\n", &num1);
    printf("%d\n", num1);

    tecla = getchar();
    printf("%d %c\n", tecla, tecla);

    scanf("%f", &num2);
    printf("%.2f", num2);

}
