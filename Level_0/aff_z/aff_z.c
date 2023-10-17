#include <unistd.h>

void	aff_z(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			write(1, "z", 1);
			break;
		}
		else
			i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "z\n", 2);
	else
		aff_z(argv[1]);
}
