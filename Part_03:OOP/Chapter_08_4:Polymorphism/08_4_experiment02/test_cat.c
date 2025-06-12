#include "test_cat.h"
#include "test_animal.h"
#include "test_animal_p.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_cat
{
	t_animal		animal;
	char			*sound;
}					t_cat;

t_cat				*cat_new(void)
{
	return ((t_cat *)malloc(sizeof(t_cat)));
}

void				cat_ctor(t_cat *cat, char *sound)
{
	animal_ctor((t_animal *)cat, sound);
	cat->sound = (char *)malloc(strlen(sound) * sizeof(char));
	strcpy(cat->sound, sound);
}

void				cat_sound(t_cat *cat)
{
	printf("%s\n", cat->sound);
}