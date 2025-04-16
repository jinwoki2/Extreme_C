#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "EC_8_4_8_21_animal_p.h"

// 부모 수준에서 animal_sound에 대한 기본 정의
void			__animal_sound(void* this_ptr)
{
	animal_t	*animal;

	animal = (animal_t *)this_ptr;
	printf("%s: Beeeep\n", animal->name);
}

// 메모리 할당자
animal_t		*animal_new(void){
	return (animal_t *)malloc(sizeof(animal_t));
}

// 생성자
void			animal_ctor(animal_t *animal)
{
	animal->name = (char *)malloc(10 * sizeof(char));
	strcpy(animal->name, "Animal");
	// 함수 포인터가 기본 정의를 가리키도록 설정하기
	animal->sound_func = __animal_sound;
}

// 소멸자
void			animal_dtor(animal_t *animal){
	free(animal->name);
}

// 행위 함수
void			animal_get_name(animal_t *animal, char *buffer){
	strcpy(buffer, animal->name);
}

void			animal_sound(animal_t *animal)
{
	// 함수 포인터가 가리키는 함수 호출하기
	animal->sound_func(animal);
}