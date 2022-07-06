// Make a program that reads an array
// of 3x3 integer values. And in the sequence 
// present in a line the elements of the main 
// diagonal delimited by a space and in another 
// line the elements of the diagonal delimited 
// by a space 
// *********************************************8
// Example of input
// 1 2 3
// 4 5 6
// 7 8 9

// expected output for the above example
// 1 5 9
// 3 5 7

#include <stdio.h>

int	main(void)
{
	int matriz[3][3], line, column;
	for (line = 0; line < 3; line++)
	{
		for (column = 0; column < 3; column++)
		{
			scanf("%d", &matriz[line][column]);
		}
	}
	for (line = 0; line < 3; line++)
	{
		for (column = 0; column < 3; column++)
		{
			if (line == column)
				printf("%d ", matriz[line][column]);
		}
	}
	printf("\n");
	for (line = 0; line < 3; line++)
	{
		for (column = 0; column < 3; column++)
		{
			if (line == 0 && column == 2)
				printf("%d ", matriz[line][column]);
			if (line == 1 && column == 1)
				printf("%d ", matriz[line][column]);
			if (line == 2 && column == 0)
				printf("%d ", matriz[line][column]);
		}
	}
}
