#ifndef TEST_CAT_H
# define TEST_CAT_H

typedef struct s_cat t_cat; // 자료형이 이래도 된다!

struct s_cat	*cat_new(void);
void			cat_ctor(t_cat *cat, char *sound); // 첫 번째 매개변수에 대입해봄! 
void			cat_sound(struct s_cat *cat);

#endif