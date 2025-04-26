#include <string.h>

class A {
public:
	char	a;
	char	b[4];
};

class B {
public:
	char	c;
	char	d;
};

class C {
public:
	char	e;
	char	f;
};

class D : public A, public B, public C {
public:
	char	str[5];
};

int	main(void)
{
	D	d;
	d.a = 'A';
	strcpy(d.b, "BBB");
	d.c = 'C';
	d.d = 'D';
	d.f = 'F';
	strcpy(d.str, "1234");
	A	*ap = &d;
	B	*bp = &d;
	C	*cp = &d;
	D	*dp = &d;
	// 이 행에서 중단점을 설정해야 한다.

	return (0);
}