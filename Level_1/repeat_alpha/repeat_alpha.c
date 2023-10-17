#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int 	count;

	i = 0;
	while (str[i] != '\0')
	{
		count = 0;
		if (str[i] >= 65 && str[i] <= 90)
			count = str[i] - 65;
		if (str[i] >= 97 && str[i] <= 122)
			count = str[i] - 97;
		while (count >= 0)
		{
			write(1, &str[i], 1);
			count--;
		}
		i++;	
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		repeat_alpha(argv[1]);
}
