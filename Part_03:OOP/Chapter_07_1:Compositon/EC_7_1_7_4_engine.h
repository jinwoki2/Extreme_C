/* Engine 클래스의 공용 인터페이스 */

#ifndef EXTREME_C_7_1_ENGINE_H
# define EXTREME_C_7_1_ENGINE_H

struct engine_t;

// 메모리 할당자
struct engine_t	*engine_new(void);

// 생성자
void			engine_ctor(struct engine_t *);

// 소멸자
void			engine_dtor(struct engine_t *);

// 행위 함수
void			engine_turn_on(struct engine_t *);
void			engine_turn_off(struct engine_t *);
double			engine_get_temperature(struct engine_t *);

#endif