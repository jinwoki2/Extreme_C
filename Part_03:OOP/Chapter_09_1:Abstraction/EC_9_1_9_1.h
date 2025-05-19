/* C로 작성한 먹을 수 있는 것(Eatable) 인터페이스 */
#include <stdlib.h>

typedef enum e_taste
{
	SWEET,
	SOUR
}	t_taste;

// 함수 포인터 자료형
typedef t_taste (*t_get_taste_func)(void *);

typedef struct	s_eatable
{
	// 가상 함수에 대한 정의를 가리키는 포인터
	t_get_taste_func get_taste_func;
	// typedef 없이 함수 포인터를 사용 시 아래 코드
	// t_taste	(*get_taste_func)(void *);
}	t_eatable;

// 인터페이스에 대한 객체를 생성하지 않기 위해 실제로는 할당자를 제거해야 한다.
t_eatable	*eatable_new(void) 
{ 
	// 본문에는 나와 있지 않지만 임의로 만들었다
	return ((t_eatable *)malloc(sizeof(t_eatable)));
}

void		eatable_ctor(t_eatable *eatable)
{
	// 가상 함수에 대한 기본 정의는 없다.
	eatable->get_taste_func = NULL;
}

// 가상 행위 함수
t_taste		eatable_get_taste(t_eatable *eatable)
{
	return (eatable->get_taste_func(eatable));
}