#include <string.h>

class A {
public:
	char	c;
	char	d;
};

class B : public A {
public:
	char	str[5];
};

int	main(void)
{
	B	b;
	
	b.c = 'A';
	b.d = 'B';
	strcpy(b.str, "1234");
	// 메모리 레이아웃을 확인하기 위해 이 행에서
	// 중단점을 설정해야 한다. 

	return (0);
}
