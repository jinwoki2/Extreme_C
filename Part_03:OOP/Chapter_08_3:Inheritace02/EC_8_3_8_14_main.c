/* 8-3의 main 시나리오 */
#include <stdio.h>
#include <stdlib.h>

#include "EC_8_3_8_11_student.h"

int	main(void)
{
	// student 객체를 만들고 생성하기
	struct student_t	*student;
	student = student_new();
	student_ctor(student, "John", "Doe", 1987, "TA5667", 134);

	// student 포인터는 person 포인터가 아니며
	// student 객체에 있는 비공개 부모 포인터에 접근할 수 없으므로,
	// student의 행위 함수를 사용해야 한다.
	char				buffer[32];
	student_get_first_name(student, buffer);
	printf("First name: %s\n", buffer);

	student_get_last_name(student, buffer);
	printf("last name: %s\n", buffer);
	
	printf("Birth year: %d\n", student_get_birth_year(student));

	student_get_student_number(student, buffer);
	printf("Student number: %s\n", buffer);
	
	printf("Passed credits: %d\n", student_get_passed_credits(student));

	// student 객체 소멸 및 해제하기
	student_dtor(student);
	free(student);

	return (0);
}