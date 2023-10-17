#include "do_op.h"

int	do_op(char *s1, char *s2, char *s3)
{
	int	first_op;
	int	second_op;
	int	result;

	first_op = ft_atoi(s1);
	second_op = ft_atoi(s3);
	switch(s2[0])
	{
		case '+':
			result = first_op + second_op;
		break;
		case '-':
			result = first_op - second_op;
		break;
		case '*':
			result = first_op * second_op;
		break;
		case '/':
			result = first_op / second_op;
		break;
		case '%':
			result = first_op % second_op;
	}
	return (result);
}
