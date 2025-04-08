/* person.h의 person_t의 실제 정의를 포함하는 비공개 헤더 파일 */
#ifndef EXTREME_C_8_2_PERSON_P_H
# define EXTREME_C_8_2_PERSON_P_H

// 비공개 정의
typedef struct
{
	char			first_name[32];
	char			last_name[32];
	unsigned int	birth_year;
}					person_t;

#endif