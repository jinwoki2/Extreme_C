#include "test_animal.h"
#include "test_cat.h"
#include "test_duck.h"

int	main(void)
{
	struct s_animal	*animal;
	struct s_cat	*cat;
	struct s_duck	*duck;
	char			*sound;

	animal = animal_new();
	cat = cat_new();
	duck = duck_new();
	sound = "Beeep";

	animal_ctor(animal, sound);
	cat_ctor(cat, sound);
	duck_ctor(duck, sound);

	animal_sound(animal);
	animal_sound((struct s_animal *)cat);
	animal_sound((struct s_animal *)duck);

	return (0);
}
