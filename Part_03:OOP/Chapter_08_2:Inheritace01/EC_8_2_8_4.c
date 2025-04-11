/* 컴파일되지 않는 상속 관계 만들기 */
struct person_t;

typedef struct
{
	// person_t가 불완전한 형식이기 때문에
	// 구조체 변수를 선언할 수 없다.
	struct person_t		person; 
	char				student_number[16];
	unsigned int		passed_credits;
}						student_t;