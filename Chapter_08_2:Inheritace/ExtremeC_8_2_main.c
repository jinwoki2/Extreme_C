/* 예제 8-2의 메인 시나리오 */
#include <stdio.h>
#include <stdlib.h>

#include "ExtremeC_8_2_person.h"
#include "ExtremeC_8_2_student.h"

int	main(void)
{
	// student 객체를 만들고 생성하기
	struct student_t	*student;
	student = student_new();
	student_ctor(student, "John", "Doe", 1987, "TA5667", 134);

	// 이제 person의 속성을 student 객체에서 읽기 위해
	// person의 행위 함수를 사용한다.
	char	buffer[32];

	// 부모의 자료형에 대한 포인터로 업캐스팅하기
	struct person_t	*person_ptr;
	person_ptr = (struct person_t *)student;

	person_get_first_name(person_ptr, buffer);
	printf("First name: %s\n", buffer);

	person_get_last_name(person_ptr, buffer);
	printf("Last name: %s\n", buffer);

	printf("Birth year: %d\n", person_get_birth_year(person_ptr));

	// 이제 student 객체에 한정된 속성을 읽는다.
	student_get_student_number(student, buffer);
	printf("Student number: %s\n", buffer);

	printf("Passed credits: %s\n", 
			student_get_passed_credits(student));

	// student 객체를 소멸 및 해제하기
	student_dtor(student);
	free(student);

	return (0);
}