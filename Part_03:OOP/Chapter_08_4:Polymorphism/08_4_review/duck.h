#ifndef DUCK_H
# define DUCK_H

typedef struct s_duck t_duck;

t_duck	*duck_new(void);
void	duck_ctor(t_duck *duck);
void	duck_dtor(t_duck *duck);

#endif