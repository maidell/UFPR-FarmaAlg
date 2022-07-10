// Make a program that reads an integer A,
// an arithmetic operator (+,-,* or /) and a second
// integer B. The program should display the
// result of the expression read.
// Use the switch structure to evaluate the operators 
// operators and use addition as the default operator.

#include <stdio.h>

int	main(void)
{
	int num1, num2, result;
	char op;
	scanf("%d\n", &num1);
	scanf("%c\n", &op);
	scanf("%d", &num2);

	switch (op)
	{
	case '+':
		result = num1 + num2;
		break ;
	case '-':
		result = num1 - num2;
		break ;
	case '/':
		result = num1 / num2;
		break ;
	case '*':
		result = num1 * num2;
		break ;
	default:
		result = num1 + num2;
		break ;
	}
	printf("%d\n",result);
}