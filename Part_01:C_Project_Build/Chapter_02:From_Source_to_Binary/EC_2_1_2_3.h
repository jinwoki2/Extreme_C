#ifndef EC_2_1_2_3_H
# define EC_2_1_2_3_H

typedef enum e_average_type
{
	NONE,
	NORMAL,
	SQUARED
}			t_average_type;

// 함수 선언
double		avg(int *, int, t_average_type);

#endif