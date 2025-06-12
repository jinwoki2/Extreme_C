#include "test_animal.h"
#include "test_animal_p.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

t_animal		*animal_new(void)
{
	return ((t_animal *)malloc(sizeof(t_animal)));
}

void			animal_ctor(t_animal *animal, char *sound)
{
	animal->sound = (char *)malloc(strlen(sound) * sizeof(char));
	strcpy(animal->sound, sound);
}

void			animal_sound(t_animal *animal)
{
	printf("%s\n", animal->sound);
}