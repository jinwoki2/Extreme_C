/* Car 클래스의 속성 구조체와 행위 함수의 선언 */
#ifndef EXTREM_C_EXAMPLES_CHAPTER_6_1_H
#define EXTREM_C_EXAMPLES_CHAPTER_6_1_H

// 이 구조는 자동차 객체에 연관된 모든 속성을 갖습니다.
typedef struct s_car
{
	char	name[32];
	double	speed;
	double	fuel;
} t_car;

// 이 함수 선언은 자동자 객체의 행위에 해당합니다.
void	car_construct(t_car *, const char *);
void	car_destruct(t_car *);
void	car_accelerate(t_car *);
void	car_brake(t_car *);
void	car_refuel(t_car *, double);

#endif