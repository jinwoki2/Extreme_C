/* ***************************************************************************
	C에서 비공개 속성과 행위를 갖는 방식
*************************************************************************** */

#ifndef EXTREME_C_EXAMPLES_CHAPTER_6_3_H
# define EXTREME_C_EXAMPLES_CHAPTER_6_3_H

# include <unistd.h>

// 공개된 속성이 없는 구조체 
// (정의가 없는 구조체 선언. 따라서 필드에 접근불가, 변수 선언불가 -> 정보은닉)
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