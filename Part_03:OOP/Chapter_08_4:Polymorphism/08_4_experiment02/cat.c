/* Cat 클래스의 비공개 구현 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"
#include "animal_p.h"

typedef struct
{
	animal_t	animal;
}				cat_t;

// 고양이의 소리에 대한 새 행위를 정의하기
void			__cat_sound(void *ptr)
{
	animal_t	*animal;

	animal = (animal_t *)ptr;
	printf("%s: Meow\n", animal->name);
}

void			__cat_trait(void *ptr)
{
	animal_t	*animal;

	animal = (animal_t *)ptr;
	printf("%s: Hide_In_Box\n", animal->name);
}

// 메모리 할당자
cat_t			*cat_new(void)
{
	return (cat_t *)malloc(sizeof(cat_t));
}

// 생성자
void			cat_ctor(cat_t *cat)
{
	animal_ctor((struct animal_t*)cat);
	strcpy(cat->animal.name, "Cat");
	// 새 행위 함수를 가리키며 오버라이딩은 실제로 여기에서 발생한다.
	cat->animal.sound_func = __cat_sound;
	cat->animal.trait_func = __cat_trait;
}

// 소멸자
void			cat_dtor(cat_t *cat)
{
	animal_dtor((struct animal_t *)cat);
}