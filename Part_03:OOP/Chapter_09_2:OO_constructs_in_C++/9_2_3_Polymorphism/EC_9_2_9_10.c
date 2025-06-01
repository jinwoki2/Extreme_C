/* C 코드에서 가상 함수가 선언 및 정의되는 방식을 보여주는 의사 코드 */

// 함수 포인터 자료형 정의하기
typedef void *	(*t_func_1)(void *, ...);
typedef void *	(*t_func_2)(void *, ...);
// ...
typedef void *	(*t_func_n)(void *, ...);

// 부모 클래스의 속성 구조체
typedef struct s_parent
{
	// 속성 
	// ...
	// 가상 행위 함수에 대한 포인터
	t_func_1	func_1;
	t_func_2	func_2;
	// ...
	t_func_n	func_n;
}	t_parent;

// 가상 행위 함수에 대한 기본 비공개 정의
void *	__deafault_func_1(t_parent *, ...) { /* 기본 정의 */ };
void *	__deafault_func_2(t_parent *, ...) { /* 기본 정의 */ };
// ...
void *	__deafault_func_n(t_parent *, ...) { /* 기본 정의 */ };

// 생성자
void	parent_ctor(t_parent *parent, ...)
{
	// 속성 초기화
	// ...
	// 가상 행위 함수에 대한 기본 정의 설정하기
	parent->func_1 = __deafault_func_1;
	parent->func_2 = __deafault_func_2;
	// ...
	parent->func_n = __deafault_func_n;
}

// 공용 and 비가상 행위 함수
void	*parent_non_virtual_func_1(t_parent *parent, ...) { /* code */ };
void	*parent_non_virtual_func_2(t_parent *parent, ...) { /* code */ };
// ...
void	*parent_non_virtual_func_m(t_parent *parent, ...) { /* code */ };

// 실제 공용 가상 행위 함수
void	*paren_func_1(t_parent *parent, ...)
{
	return (parent->func_1)(parent/* , ... */);
}

void	*paren_func_2(t_parent *parent, ...)
{
	return (parent->func_2)(parent/* , ... */);
}

void	*paren_func_n(t_parent *parent, ...)
{
	return (parent->func_n)(parent/* , ... */);
}

