/* Student와 Person의 객체 포인터 사이의 업캐스팅 */
#include <stdio.h>

typedef struct
{
	char			first_name[32];
	char			last_name[32];
	unsigned int	birth_year;
}					person_t;

typedef struct
{
	person_t		person;
	char			student_number[16];     // 추가 속성
	unsigned int	passed_credits; 		// 추가 속성
}					student_t;

int	main(void)
{
	student_t	s;
	student_t	*s_ptr;
	person_t	*p_ptr;
	person_t	*p_ptr2;	// 실험용

	s_ptr = &s;
	p_ptr = (person_t *)&s;
	p_ptr2 = &s;	// 실험용
	printf("Student pointer points to %p\n", (void *)s_ptr);
	printf("Student pointer points to %p\n", (void *)p_ptr);
	printf("Student pointer points to %p\n", (void *)p_ptr2); // 실험용으로 넣어봄

	return (0);
}