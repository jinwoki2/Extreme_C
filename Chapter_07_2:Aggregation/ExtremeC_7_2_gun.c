/* Gun Class에 대한 정의 */
#include <stdlib.h>

typedef int	bool_t;

/* 속성 구조체 */
typedef struct
{
	int		bullets;
}			gun_t;

/* 메모리 할당자 */
gun_t	*gun_new(void)
{
	return (gun_t *)malloc(sizeof(gun_t));
}

/* 생성자 */
void	gun_ctor(gun_t *gun, int initial_bullets)
{
	gun->bullets = 0;
	if (initial_bullets > 0)
		gun->bullets = initial_bullets;
}

/* 소멸자 */
void	gun_dtor(gun_t *gun)
{
	// 할 일 없음
}

/* 행위 함수 */
bool_t	gun_has_bullets(gun_t *gun)
{
	return (gun->bullets > 0);
}

void	gun_trigger(gun_t *gun)
{
	gun->bullets--;
}

void	gun_refill(gun_t *gun)
{
	gun->bullets = 7;
}