#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main (int argc, char *argv[])
{
	if (argc != 2)
		printf("ERROR\n");
	else
		printf("%i\n", ft_strlen(argv[1]));
}
