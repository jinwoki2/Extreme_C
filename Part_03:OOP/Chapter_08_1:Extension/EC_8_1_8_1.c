/* Person 클래스와 Student 클래스 속성 구조체 */
typedef struct
{
	char			first_name[32];
	char			last_name[32];
	unsigned int	birth_year;
}					person_t;

typedef struct
{
	char			first_name[32];
	char			last_name[32];
	unsigned int	birth_year;
	char			student_number[16];	// 추가 속성
	unsigned int	passed_credits;		// 추가 속성
}					student_t;