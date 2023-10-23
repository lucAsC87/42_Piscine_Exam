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
