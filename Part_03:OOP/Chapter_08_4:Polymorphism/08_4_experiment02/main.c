/* 예제[8-4]의 메인 시나리오 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 공용 인터페이스만 포함한다.
#include "EC_8_4_8_20_animal.h"
#include "EC_8_4_8_23_cat.h"
#include "EC_8_4_8_25_duck.h"

int	main(void)
{
	struct animal_t		*animal;
	struct cat_t		*cat;
	struct duck_t		*duck;
	
	animal = animal_new();
	cat = cat_new();
	duck = duck_new();

	animal_ctor(animal);
	cat_ctor(cat);
	duck_ctor(duck);

	animal_sound(animal);
	animal_sound((struct animal_t *)cat);
	animal_sound((struct animal_t *)duck);

	animal_dtor(animal);
	cat_dtor(cat);
	duck_dtor(duck);
	
	free(duck);
	free(cat);
	free(animal);

	return (0);
}