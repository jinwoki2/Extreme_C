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

	s_ptr = &s;
	p_ptr = (person_t *)&s;
	printf("Student pointer points to %p\n", (void *)s_ptr);
	printf("Student pointer points to %p\n", (void *)p_ptr);

	return (0);
}