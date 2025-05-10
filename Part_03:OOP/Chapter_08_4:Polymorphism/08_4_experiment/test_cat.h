#ifndef TEST_CAT__H
# define TEST_CAT_H

struct s_cat;

struct s_cat	*cat_new(void);
void			cat_ctor(struct s_cat *cat, char *sound);
void			cat_sound(struct s_cat *cat);

#endif