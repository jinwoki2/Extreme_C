#include <stdio.h>
#include "EC_2_1_2_3.h"

int	main(void)
{
	// 배열 선언
	int		array[5];
	double	average;

	// 배열 채우기
	array[0] = 10;
	array[1] = 3;
	array[2] = 5;
	array[3] = -8;
	array[4] = 9;

	// 'avg' 함수로 평균 계산하기
	average = avg(array, 5, NORMAL);
	printf("The average: %f\n", average);
	average = avg(array, 5, SQUARED);
	printf("The squared average: %f\n", average);

	return (0);
}
