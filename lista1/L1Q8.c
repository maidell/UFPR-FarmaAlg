// Make a program that reads a list of numbers
// ending with zero. The zero is not part of the list.
// After reading, the program should present in
// each line and in that order, the values of the sum and the
// average of the numbers read.

#include <stdio.h>

int	main(void)
{
	int num1, num2, first, result_sum, result_av, num_i;

	num1 = 1;
	result_sum = 0;
	num_i = 0;
	while (num1 != 0)
	{
		scanf("%d", &num1);
		
		if (num1 == 0)
		{
			break ;
		}
		
		result_sum += num1;
		num_i++;
		result_av = result_sum / num_i;
				
	}
		printf("%d\n", result_sum);
		printf("%d\n", result_av);
}