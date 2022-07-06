// Make a program that reads a list of numbers
// ending with 0. The value zero will not be part of the
// bvalues to be considered. After reading the
// should present, in this order and one number
// number on each line, the lowest and the highest value read.

#include <stdio.h>

int	main(void)
{
	int box, min, max, first;

	box = 1;
	first = 1;
	while (box != 0)
	{
		scanf("%d", &box);

		if (box == 0)
		{
			break;
		}
		if (first == 1)
		{
			max = box;
			min = box;
		}
		if (box > max)
		{
			max = box;
		}
		if (box < min)
		{
			min = box;
		}
		first = 0;
	}
	printf("%d\n", min);
	printf("%d\n", max);
}