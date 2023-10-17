/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if	(str[i] >= 65 && str[i] <= 77)
			str[i] += (1 + ((77 - str[i]) * 2));
		else if (str[i] >= 97 && str[i] <= 109)
			str[i] += (1 + ((109 - str[i]) * 2));
		else if (str[i] >= 78 && str[i] <= 90)
			str[i] -= (25 - ((90 - str[i]) * 2)); 
		else if (str[i] >= 110 && str[i] <= 122)
			str[i] -= (25 - ((122 - str[i]) * 2));
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		alpha_mirror(argv[1]);
}
