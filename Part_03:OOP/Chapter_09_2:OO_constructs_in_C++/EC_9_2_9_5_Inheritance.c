/* C의 상속 예 */
#include <string.h>

typedef struct
{
	char	c;
	char	d;
}			a_t;

typedef struct
{
	a_t		parent;
	char	str[5];
}			b_t;

int	main(void)
{
	b_t		b;
	
	b.parent.c = 'A';
	b.parent.d = 'B';
	strcpy(b.str, "1234");
	// 메모리 레이아웃을 확인하기 위해 이 행에서
	// 중단점을 설정해야 한다.

	return (0);
}