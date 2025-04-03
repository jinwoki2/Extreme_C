/* Car 클래스에 대한 정의 */
/* 자동차가 엔진을 포함하는 방식을 나타낸다. */

#include "ExtremeC_7_1_engine.h" // Car는 Engine에 대한 공용 인터페이스로만 작동할 수 있다.
#include <stdlib.h>

typedef struct
{
	struct engine_t *engine; // 이 속성으로 인해 합성이 발생
}		car_t;

car_t	*car_new(void)
{
	return (car_t *)malloc(sizeof(car_t));
}

void	car_ctor(car_t *car)
{
	car->engine = engine_new(); // 엔진 객체에 대해 메모리 할당하기
	engine_ctor(car->engine);   // 엔진 객체 생성하기
}

void	car_dtor(car_t *car)
{
	engine_dtor(car->engine); // 엔진 객체 소멸시키기
	free(car->engine);
}

void	car_start(car_t *car)
{
	engine_turn_on(car->engine);
}

void	car_stop(car_t *car)
{
	engine_turn_off(car->engine);
}

double	car_get_engine_temperature(car_t *car)
{
	return (engine_get_temperature(car->engine));
}