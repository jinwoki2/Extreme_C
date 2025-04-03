/* Engine 클래스에 대한 정의 */

#include <stdlib.h>

typedef enum
{
	ON,
	OFF
}	state_t;

typedef struct
{
	state_t state;
	double temperature;
}	engine_t;

// 메모리 할당자
engine_t	*engine_new(void)
{
	return (engine_t *)malloc(sizeof(engine_t));
}

// 생성자
void	engine_ctor(engine_t *engine)
{
	engine->state = OFF;
	engine->temperature = 15;
}

// 소멸자
void	engine_dtor(engine_t *engine)
{
	// 할 일 없음
}

// 행위 함수
void	engine_turn_on(engine_t *engine)
{
	if (engine->state == ON)
		return ;
	engine->state = ON;
	engine->temperature = 75;
}

void	engine_turn_off(engine_t *engine)
{
	if (engine->state == OFF)
		return ;
	engine->state = OFF;
	engine->temperature = 15;
}

double	engine_get_temperature(engine_t *engine)
{
	return (engine->temperature);
}