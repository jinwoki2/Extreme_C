/* Duck 클래스의 비공개 구현 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"
#include "animal_p.h"

typedef struct 
{
	animal_t	animal;
}				duck_t;

// 오리 소리에 대한 새로운 행위 함수 정의하기
void			__duck_sound(void *ptr)
{
	animal_t	*animal;

	animal = (animal_t *)ptr;
	printf("%s: Quacks\n", animal->name);
}
void			__duck_trait(void *ptr)
{
	animal_t	*animal;

	animal = (animal_t *)ptr;
	printf("%s: Swim_on_lake\n", animal->name);
}

// 메모리 할당자
duck_t			*duck_new(void)
{
	return (duck_t *)malloc(sizeof(duck_t));
}

// 생성자
void			duck_ctor(duck_t *duck)
{
	animal_ctor((struct animal_t *)duck);
	strcpy(duck->animal.name, "Duck");
	// 새 행위 함수를 가리키며 오버라이딩은 실제로 여기에서 발생한다.
	duck->animal.sound_func = __duck_sound;
	duck->animal.trait_func = __duck_trait;
}

void			duck_dtor(duck_t *duck)
{
	animal_dtor((struct animal_t *)duck);
}
