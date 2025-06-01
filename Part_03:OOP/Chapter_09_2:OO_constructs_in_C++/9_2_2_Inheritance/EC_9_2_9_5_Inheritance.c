/* C의 상속 예 */
#include <string.h>

typedef struct s_a
{
	char	c;
	char	d;
}			t_a;

typedef struct s_b
{
	t_a		parent;
	char	str[5];
}			t_b;

int	main(void)
{
	t_b		b;
	
	b.parent.c = 'A';
	b.parent.d = 'B';
	strcpy(b.str, "1234");
	// 메모리 레이아웃을 확인하기 위해 이 행에서
	// 중단점을 설정해야 한다.

	return (0);
}