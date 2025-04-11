/* Student 클래스의 비공개 정의 */
#include <stdlib.h>
#include <string.h>
#include "EC_8_2_8_5_person.h"

// person_t는 다음 헤더 파일에 정의되어 있으며 여기에서 필요하다.
#include "EC_8_2_8_6_person_p.h"

// 전방 선언
typedef struct
{
	// 여기에서 person 클래스에서 모든 속성을 상속 받으며
	// 또한 이 중첩으로 인해 person 클래스의 모든 행위 함수를 사용할 수 있다.
	person_t		person;
	char			*student_number;
	unsigned int	passed_credits;
}					student_t;

// 메모리 할당자
student_t			*student_new(void)
{
	return (student_t *)malloc(sizeof(student_t));
}

// 생성자
void				student_ctor(student_t *student,
								const char *first_name,
								const char *last_name,
								unsigned int birth_year,
								const char *student_number,
								unsigned int passed_credits)
{
	// 부모 클래스에 대한 생성자 호출하기
	person_ctor((struct person_t *)student, first_name, last_name, birth_year);
	student->student_number = (char *)malloc(16 * sizeof(char));
	strcpy(student->student_number, student_number);
	student->passed_credits = passed_credits;
}

// 소멸자
void				student_dtor(student_t *student)
{
	// 자식 객체를 먼저 소멸시켜야 한다.
	free(student->student_number);
	// 그런 다음, 부모 클래스의 소멸자 함수를 호출해야 한다.
	person_dtor((struct person_t *)student);
}

// 행위 함수
void				student_get_student_number(student_t *student, char *buffer)
{
	strcpy(buffer, student->student_number);
}

unsigned int		student_get_passed_credits(student_t *student)
{
	return (student->passed_credits);
}