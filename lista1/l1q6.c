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