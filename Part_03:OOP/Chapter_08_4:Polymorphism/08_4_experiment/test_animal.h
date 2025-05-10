#ifndef TEST_ANIMAL_H
# define TEST_ANIMAL_H

struct s_animal;

struct s_animal	*animal_new(void);
void			animal_ctor(struct s_animal *animal, char *sound);
void			animal_sound(struct s_animal *animal);

#endif