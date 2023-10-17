/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	min_counter;
	int	num;

	i = 0;
	min_counter = 0;
	num = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			min_counter++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	if (min_counter % 2 != 0)
		num *= -1;
	return (num);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
}
