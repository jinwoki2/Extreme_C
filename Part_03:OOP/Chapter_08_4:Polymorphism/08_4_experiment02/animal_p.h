/* Animal 클래스의 비공개 헤더 */
#ifndef EC_8_4_8_21_ANIMAL_P_H
# define EC_8_4_8_21_ANIMAL_P_H

// animal_sound의 다른 morphs(형태)를
// 가리키는데 필요한 함수 포인터형
typedef void		(*sound_func_t)(void *);

// 전방 선언
typedef struct
{
	char			*name;
	// 이 멤버는 실제 sound 행위를 수행하는
	// 함수에 대한 포인터이다.
	sound_func_t	sound_func;
}					animal_t;

#endif