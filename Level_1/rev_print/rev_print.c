#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev_print(char *str)
{
	int	end;

	end = ft_strlen(str) - 1;
	while (end >= 0)
	{
		write(1, &str[end], 1);
		end--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		rev_print(argv[1]);
}
