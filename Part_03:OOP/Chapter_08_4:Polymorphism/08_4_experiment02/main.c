/* 예제[8-4]의 메인 시나리오 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 공용 인터페이스만 포함한다.
#include "animal.h"
#include "cat.h"
#include "duck.h"

int	main(void)
{
	struct cat_t		*cat;
	struct duck_t		*duck;
	
	cat = cat_new();
	duck = duck_new();

	cat_ctor(cat);
	duck_ctor(duck);

	animal_sound((struct animal_t *)cat);
	animal_sound((struct animal_t *)duck);
	animal_trait((struct animal_t *)cat);
	animal_trait((struct animal_t *)duck);

	cat_dtor(cat);
	duck_dtor(duck);
	
	free(duck);
	free(cat);

	return (0);
}