/* Animal 클래스의 공용 인터페이스 */

#ifndef EC_8_4_8_20_ANIMAL_H
# define EC_8_4_8_20_ANIMAL_H

// 전방 선언
struct animal_t;

// 메모리 할당자
struct animal_t		*animal_new(void);

// 생성자
void				animal_ctor(struct animal_t *);

// 소멸자
void				animal_dtor(struct animal_t *);

// 행위 함수
void				animal_get_name(struct animal_t *, char *);
void				animal_sound(struct animal_t *);

# endif