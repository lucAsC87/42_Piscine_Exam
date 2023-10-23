#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void    last_word(char *str)
{
        int     i;
        int     j;

        i = ft_strlen(str) - 1;
        while (i >= 0)
        {
		j = i;
		while (str[i] == 9 || str[i] == 32)
		{
			i--;
			j--;
		}
                while (str[i] != 9 && str[i] != 32)
		{
			i--;
                        j--;
		}
		if (str[i] == 9 || str[i] == 32)
			break;
                i--;
        }
	while (str[j] == 9 || str[j] == 32)
		j++;
        while (str[j] != '\0' && str[j] != 9 && str[j] != 32)
        {
                write(1, &str[j], 1);
                j++;
        }
        write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		last_word(argv[1]);
}
