/* 메모리에서 동일한 바이트 주소를 가리키는 세 가지 자료형으로부터 얻은 3개의 포인터 */
#include <stdio.h>

typedef struct
{
	int			x;
	int			y;
}				point_t;

typedef struct
{
	int			radius;
	point_t		center;
}				circle_t;

int	main(void)
{
	circle_t	c;

	// 구조체 변수 c라는 메모리에 접근할 때 circle_t를 기준으로 (12바이트를 기준으로) 접근한다 
	circle_t	*p1 = &c;
	// 구조체 변수 c라는 메모리에 접근할 때 point_t를 기준으로 (8바이트를 기준으로) 접근한다 
	point_t		*p2 = (point_t *)&c;
	// 구조체 변수 c라는 메모리에 접근할 때 int를 기준으로 (4바이트를 기준으로) 접근한다	
	int			*p3 = (int *)&c;

	printf("p1: %p\n", (void *)p1);
	printf("p2: %p\n", (void *)p2);
	printf("p3: %p\n", (void *)p3);

	return (0);
}