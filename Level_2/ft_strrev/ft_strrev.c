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
	length-=1;
	while (start < ((length + 1) / 2))
	{
		temp = str[start];
		str[start] = str[length - start];
		str[length - start] = temp;
		start++;
	}
	return (str);
}
