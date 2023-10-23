/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$
*/

#include <stdio.h>
#include <stdlib.h>

int	pgcd(char *s1, char *s2)
{
	int	n1;
	int	n2;
	int	i;
	int	min;
	int	max;

	n1 = atoi(s1);
	n2 = atoi(s2);
	i = 1;
	min = (n1 < n2) ? n1 : n2;
	max = (n1 > n2) ? n1 : n2;
	while (min / i >= 2)
		i++;
	while (max % i != 0 || min % i != 0)
		i--;
	printf("%i\n", i);
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		printf("\n");
	else
		pgcd(argv[1], argv[2]);
}
