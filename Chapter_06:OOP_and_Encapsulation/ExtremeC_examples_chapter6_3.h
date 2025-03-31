#ifndef EXTREME_C_EXAMPLES_CHAPTER_6_3_H
# define EXTREME_C_EXAMPLES_CHAPTER_6_3_H

# include <unistd.h>

// 공개된 속성이 없는 구조체
struct list_t;

// 할당 함수
struct list_t	*list_malloc(void);

// 생성자 및 소멸자 함수
void	list_init(struct list_t *);
void	list_destory(struct list_t *);

// 공개(public) 행위 함수
int		list_add(struct list_t *, int);
int		list_get(struct list_t *, int, int *);
void	list_clear(struct list_t *);
size_t	list_size(struct list_t *);
void	list_print(struct list_t *);

#endif