#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

/* bool_t형의 별칭 정의 */
typedef int	bool_t;

/* list_t형 정의 */
typedef struct
{
	size_t	size;
	int		*items;
}			list_t;

/************************************
 * 비공개 행위 함수 정의
 ************************************/

/* 리스트가 가득 찼는지 확인하는 비공개 행위 */
static bool_t	__list_is_full(list_t *list)
{
	return (list->size == MAX_SIZE);
}

/* 인덱스를 확인하는 비공개 행위 */
static bool_t	__check_index(list_t *list, const size_t index)
{
	return (0 <= index && index <= list->size);
}

/************************************
 * 공개 행위 함수 정의
 ************************************/

/* 리스트 객체에 관한 메모리 할당 */
list_t	*list_malloc(void)
{
	return (list_t *)malloc(sizeof(list_t));
}

/* 리스트 객체에 관한 생성자 */
void	list_init(list_t *list)
{
	list->size = 0;
	list->items = (int *)malloc(MAX_SIZE * sizeof(int));
}

/* 리스트 객체에 관한 소멸자 */
void	list_destroy(list_t *list)
{
	free(list->items);
}

/*************************************
 * 할당, 생성자, 소멸자 이외의 공개 행위 함수
 *************************************/

int	list_add(list_t *list, const int item)
{
	// 비공개 행위의 사용법
	if (__list_is_full(list))
		return (-1);
	list->items[list->size] = item;
	list->size++;
	return (0);
}

int	list_get(list_t *list, const int index, int *result)
{
	if (__check_index(list, index))
	{
		*result = list->items[index];
		return (0);
	}
	return (-1);
}

void	list_clear(list_t *list)
{
	list->size = 0;
}

size_t	list_size(list_t *list)
{
	return (list->size);
}

void	list_print(list_t *list)
{
	printf("[ ");
	for (size_t i = 0; i < list->size; i++)
		printf("%d ", list->items[i]);
	printf("]\n");
}