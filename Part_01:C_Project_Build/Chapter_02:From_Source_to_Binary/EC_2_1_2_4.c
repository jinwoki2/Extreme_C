#include "EC_2_1_2_3.h"

double	avg(int *array, int length, t_average_type type)
{
	int		i;
	double	sum;

	if (length <= 0 || type == NONE)
		return (0);
	sum = 0;
	i = 0;
	while (i < length)
	{
		if (type == NORMAL)
			sum += array[i];
		else if (type == SQUARED)
			sum += array[i] * array[i];	
		i++;
	}
	return (sum / length);
}