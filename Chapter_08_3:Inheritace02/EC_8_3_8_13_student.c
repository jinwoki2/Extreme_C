/* 접근 2: Student 클래스의 비공개 구현 */
#include <stdlib.h>
#include <string.h>

// person 클래스에 대한 공용 인터페이스
#include "EC_8_2_8_5_person.h"

// 전방 선언
typedef struct
{
	char			*student_number;
	unsigned int	passed_credits;
	// person_t가 불완전 형식이기 때문에 여기에 포인터가 있어야 한다.
	struct person_t	*person;
}					student_t;

// 메모리 할당자
student_t			*student_new()
{
	return (student_t *)malloc(sizeof(student_t));
}

// 생성자
void				student_ctor(student_t *student,
								const char *first_name,
								const char *last_name,
								unsigned int birth_year,
								const char * student_number,
								unsigned int passed_credits)
{
	// 부모 객체에 대한 메모리 할당하기
	student->person = person_new();
	person_ctor(student->person, first_name, last_name, birth_year);
	student->student_number = (char *)malloc(16 * sizeof(char));
	strcpy(student->student_number, student_number);
	student->passed_credits = passed_credits;	
}

// 소멸자
void				student_dtor(student_t* student)
{
	// 먼저 자식 객체를 소멸시켜야 한다.
	free(student->student_number);
	// 그런 다음, 부모 클래스의 소멸자 함수를 호출해야 한다.
	person_dtor(student->person);
	// 그리고 부모 객체에 할당된 메모리를 해제해야 한다.
	free(student->person);
}

// 행위 함수
void				student_get_first_name(student_t *student, char *buffer)
{
	// person의 행위 함수를 사용해야 한다.
	person_get_first_name(student->person, buffer);
}

void				student_get_last_name(student_t *student, char *buffer)
{
	// person의 행위 함수를 사용해야 한다.
	person_get_last_name(student->person, buffer);
}

unsigned int		student_get_birth_year(student_t *student)
{
	// person의 행위 함수를 사용해야 한다.
	return (person_get_birth_year(student->person));
}

void				student_get_student_number(student_t *student, char *buffer)
{
	strcpy(buffer, student->student_number);
}

unsigned int		student_get_passed_credits(student_t *student)
{
	return (student->passed_credits);
}
