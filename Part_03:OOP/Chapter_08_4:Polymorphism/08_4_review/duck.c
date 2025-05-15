#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "animal.h"
#include "animal_p.h"

typedef struct s_duck
{
	t_animal	animal;
}				t_duck;

void	__duck_sound(void *ptr)
{
	t_animal	*animal;

	animal = (t_animal *)ptr;
	printf("%s: Quacks\n", animal->name);
}

t_duck	*duck_new(void)
{
	return ((t_duck *)malloc(sizeof(t_duck)));
}

void	duck_ctor(t_duck *duck)
{
	animal_ctor((t_animal *)duck);
	strcpy(duck->animal.name, "Duck");
	duck->animal.sound_func = __duck_sound;
}

void	duck_dtor(t_duck *duck)
{
	animal_dtor((t_animal *)duck);
}