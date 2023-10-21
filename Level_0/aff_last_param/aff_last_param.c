/*
Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

#include <unistd.h>

void	ft_write(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i] , 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main (int argc, char *argv[])
{
	if (argc < 2)
		write(1, "\n", 1);
	else
		ft_write(argv[argc - 1]);
}
