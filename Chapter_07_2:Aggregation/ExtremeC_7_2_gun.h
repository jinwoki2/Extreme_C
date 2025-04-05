/* Gun Class의 공용 인터페이스 */
#ifndef EXTREME_C_7_2_GUN_H
# define EXTREME_C_7_2_GUN_H

typedef int		bool_t;

struct gun_t; // 전방선언

struct gun_t	*gun_new(void);        // 메모리 할당자
void			gun_ctor(struct gun_t *, int); // 생성자
void			gun_dtor(struct gun_t *);      // 소멸자

/* 행위 함수 */
bool_t			gun_has_bullets(struct gun_t *);
void			gun_trigger(struct gun_t *);
void			gun_refill(struct gun_t *);

#endif