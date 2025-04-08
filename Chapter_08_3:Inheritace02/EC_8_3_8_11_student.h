/* 접근 2: Student 클래스의 공용 인터페이스 */
#ifndef EXTREME_C_8_3_8_11_STUDENT_H
# define EXTREME_C_8_3_8_11_STUDENT_H

// 전방 선언
struct student_t;

// 메모리 할당자
struct student_t	*student_new(void);

// 생성자
void				student_ctor(struct student_t *,
								const char * /* first name */,
								const char * /* last name */,
								unsigned int /* birth year */,
								const char * /* student number */,
								unsigned int /* passed credits */);

// 소멸자
void				student_dtor(struct student_t *);

// 행위 함수
void				student_get_first_name(struct student_t *, char *);
void				student_get_last_name(struct student_t *, char *);
unsigned int		student_get_birth_year(struct student_t *);
void				student_get_student_number(struct student_t *, char *);
unsigned int		student_get_passed_credits(struct student_t *);

#endif