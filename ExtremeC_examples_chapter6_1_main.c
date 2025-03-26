#include <stdio.h>
#include "ExtremeC_examples_chapter6_1.h"

// 메인 함수
int main(int argc, char const *argv[])
{
	// 객체 변수 만들기
	t_car	car;

	// 객체 생성
	car_construct(&car, "Renault");

	// 메인 알고리듬
	car_refuel(&car, 100.0);
	printf("Car is refueled, the correct fuel level is %f\n", car.fuel);
	while (car.fuel > 0)
	{
		printf("Car fuel level: %f\n", car.fuel);
		if (car.speed < 80)
		{
			car_accelerate(&car);
			printf("Car has been accelerated to the speed: %f\n", car.speed);
		}
		else
		{
			car_brake(&car);
			printf("Car has been slowed down to the speed: %f\n", car.speed);
		}
	}

	printf("Car ran out of the fuel! Slowing down ...\n");
	while (car.speed > 0)
	{
		car_brake(&car);
		printf("Car has been slowed down to the speed: %f\n", car.speed);
	}

	// 객체 소멸 (주석처리를 한 이유는 객체가 stack 메모리에 할당되어 해제할 게 없기 때문)
	// char_destruct(&car);

	return 0;
}
