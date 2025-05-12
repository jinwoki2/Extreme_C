#include "test_duck.h"
#include "test_animal.h"
#include "test_animal_p.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_duck
{
	t_animal		animal;
	char			*sound;	
}					t_duck;

t_duck				*duck_new(void)
{
	return ((t_duck *)malloc(sizeof(t_duck)));
}

void				duck_ctor(t_duck *duck, char *sound)
{
	animal_ctor((t_animal *)duck, sound);
	duck->sound = (char *)malloc(strlen(sound) * sizeof(char));
	strcpy(duck->sound, sound);
}

void				duck_sound(t_duck *duck)
{
	printf("%s\n", duck->sound);
}