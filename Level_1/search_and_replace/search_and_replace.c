#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	search_and_replace(char *str, char *a, char *b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
			str[i] = b[0];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 4 || ft_strlen(argv[2]) > 1 || ft_strlen(argv[3]) > 1)
		write(1, "\n", 1);
	else
		search_and_replace(argv[1], argv[2], argv[3]);
}
