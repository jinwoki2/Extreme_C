#include "ExtremeC_7_1_car.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct car_t *car = car_new();	// 자동차 객체에 대해 메모리 할당
	car_ctor(car);					// 자동차 객체를 생성

	printf("자동차 객체가 시작되기 전의 엔진 온도: %f\n", 
			car_get_engine_temperature(car));
	car_start(car);
	printf("자동차 객체가 시작된 후의 엔진 온도: %f\n", 
			car_get_engine_temperature(car));
	car_stop(car);
	printf("자동차가 멈춘 뒤의 엔진 온도: %f\n", 
			car_get_engine_temperature(car));
	
	car_dtor(car); 					// 자동차 객체 소멸
	free(car);						// 자동차 객체에 대해 할당된 메모리 해제

	return (0);
}