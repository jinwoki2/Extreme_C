/* 접근 2: Person 클래스의 구현 */
#include <stdlib.h>
#include <string.h>

// 비공개 정의
typedef struct
{
	char			first_name[32];
	char			last_name[32];
	unsigned int	birth_year;
}					person_t;

// 메모리 할당자
person_t		*person_new()
{
	return (person_t *)malloc(sizeof(person_t));
}

// 생성자
void			person_ctor(person_t *person,
							const char *first_name,
							const char *last_name,
							unsigned int birth_year)
{
	strcpy(person->first_name, first_name);
	strcpy(person->last_name, last_name);
	person->birth_year = birth_year;
}

// 소멸자
void			person_dtor(person_t *person)
{
	// 할 일 없음
}

// 행위 함수
void			person_get_first_name(person_t *person, char *buffer)
{
	strcpy(buffer, person->first_name);
}

void			person_get_last_name(person_t *person, char *buffer)
{
	strcpy(buffer, person->last_name);
}

unsigned int	person_get_birth_year(person_t *person)
{
	return (person->birth_year);
}