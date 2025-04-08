/* Car 클래스의 행위 함수에 관한 정의 */
#include <string.h>
#include "ExtremeC_6_1.h"

// 앞의 함수에 관한 정의
void car_construct(car_t *car, const char *name)
{
	strcpy((*car).name, name);
	car->speed = 0.0;
	car->fuel = 0.0;
	// speed와 fuel을 0으로 초기화 하는 거라면 생략가능. 
	// 구조체는 선언하고 초기화하지 않으면 0으로 초기화 되기 때문이다.
}

void car_destruct(car_t *car)
{
	// 여기서 할 일은 없습니다. 객체가 지역변수에 할당되기 때문.
}

void car_accelerate(car_t *car)
{
	car->speed += 0.05;
	car->fuel -= 1.0;
	if (car->fuel < 0.0)
		car->fuel = 0.0;
}

void car_brake(car_t *car)
{
	car->speed -= 0.07;
	if (car->speed < 0.0)
		car->speed = 0.0;
	car->fuel -= 2.0;
	if (car->fuel < 0.0)
		car->fuel = 0.0;
}

void car_refuel(car_t *car, double amount)
{
	car->fuel = amount;
}