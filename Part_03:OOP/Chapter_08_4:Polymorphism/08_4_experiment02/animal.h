/* Animal 클래스의 공용 인터페이스 */

#ifndef ANIMAL_H
# define ANIMAL_H

// 전방 선언
typedef struct animal_t animal_t;

// 생성자
void				animal_ctor(struct animal_t *);

// 소멸자
void				animal_dtor(struct animal_t *);

// 행위 함수
void				animal_get_name(struct animal_t *, char *);
void				animal_sound(struct animal_t *);
void				animal_trait(struct animal_t *);

# endif