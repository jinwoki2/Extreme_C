/* Animal 클래스의 비공개 헤더 */
#ifndef ANIMAL_P_H
# define ANIMAL_P_H

// animal_sound의 다른 morphs(형태)를
// 가리키는데 필요한 함수 포인터형
typedef void		(*t_fp_v_vp)(void *);

// 전방 선언
typedef struct animal_t
{
	char		*name;
	// 이 멤버는 실제 sound 행위를 수행하는
	// 함수에 대한 포인터이다.
	t_fp_v_vp	sound_func;
	t_fp_v_vp	trait_func;
}				animal_t;

#endif