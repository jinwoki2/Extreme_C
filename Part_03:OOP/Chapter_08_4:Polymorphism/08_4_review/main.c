#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "duck.h"

int main(void)
{
	t_animal	*animal;
	t_duck		*duck;

	animal = animal_new();
	duck = duck_new();

	animal_ctor(animal);
	duck_ctor(duck);

	animal_sound(animal);
	animal_sound((t_animal *)duck);

	animal_dtor(animal);
	duck_dtor(duck);

	return (0);
}
