#include "test_duck.h"
#include "test_animal.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_duck
{
	struct s_animal	*animal;
	char			*sound;	
}					t_duck;

t_duck				*duck_new(void)
{
	return ((t_duck *)malloc(sizeof(t_duck)));
}

void				duck_ctor(t_duck *duck, char *sound)
{
	duck->animal = animal_new();
	animal_ctor(duck->animal, sound);
	duck->sound = (char *)malloc(strlen(sound) * sizeof(char));
	strcpy(duck->sound, sound);
}

void				duck_sound(t_duck *duck)
{
	printf("%s\n", duck->sound);
}