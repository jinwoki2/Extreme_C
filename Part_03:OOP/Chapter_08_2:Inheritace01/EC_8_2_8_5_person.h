/* Person 클래스의 공용 인터페이스 */
#ifndef EC_8_2_8_5_PERSON_H
# define EC_8_2_8_5_PERSON_H

// 전방 선언
struct person_t;

// 메모리 할당자
struct person_t	*person_new(void);

// 생성자
void			person_ctor(struct person_t *, 
							const char * /* first name */,
							const char * /* last name */, 
							unsigned int /* birth year */);

// 소멸자
void			person_dtor(struct person_t *);

// 행위 함수
void			person_get_first_name(struct person_t *, char *);
void			person_get_last_name(struct person_t *, char *);
unsigned int	person_get_birth_year(struct person_t *);

#endif