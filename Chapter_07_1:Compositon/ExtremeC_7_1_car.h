/* Car 클래스의 공용 인터페이스 */

#ifndef EXTREME_C_7_1_CAR_H
# define EXTREME_C_7_1_CAR_H

struct car_t;

// 메모리 할당자
struct car_t	*car_new(void);

// 생성자
void			car_ctor(struct car_t *);

// 소멸자
void			car_dtor(struct car_t *);

// 행위 함수
void			car_start(struct car_t *);
void			car_stop(struct car_t *);
double			car_get_engine_temperature(struct car_t *);

#endif