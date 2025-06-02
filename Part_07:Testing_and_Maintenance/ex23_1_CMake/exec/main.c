#include "calc.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	res;

	a = 10; 
	b = 12;
	res = calc_mult(a, b);
	
	printf("result: %d\n", res);

	return (0);
}