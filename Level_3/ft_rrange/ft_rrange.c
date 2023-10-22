/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	size;
	int	first;
	int	*range;
	int	i;
	int	last;
	
	size = 1;
	first = start;
	if (start < end)
	{
		while (first < end)
		{
			first++;
			size++;
		}
	}
	else if (start > end)
	{
		while (first > end)
		{
			first--;
			size++;
		}	
	}
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	last = end;
	if (start < end)
	{
		while (last >= start)
		{
			range[i] = last;
			i++;
			last--;
		}
	}
	else if (start > end)
	{
		while (last <= start)
		{
			range[i] = last;
			i++;
			last++;
		}
	}
	return (range);
}

int	main(void)
{
	int	*test = ft_rrange(0, -3);
	for (int i = 0; i < 4; i++)
		printf("%i\n", test[i]);
}
