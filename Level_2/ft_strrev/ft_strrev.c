/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

char *ft_strrev(char *str)
{
	int	start;
	int	length;
	char	temp;
	
	start = 0;
	length = 0;
	while (str[length] != '\0')
		length++;
	while (start < length)
	{
		temp = str[start];
		str[start] = str[length];
		str[length] = temp;
	}
	return (str);
}
