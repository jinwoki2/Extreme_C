#ifndef TEST_DUCK_H
# define TEST_DUCK_H

struct s_duck;

struct s_duck	*duck_new(void);
void			duck_ctor(struct s_duck *duck, char *sound);
void			duck_sound(struct s_duck *duck);

#endif