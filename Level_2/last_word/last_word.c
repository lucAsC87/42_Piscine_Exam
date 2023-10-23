/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

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
