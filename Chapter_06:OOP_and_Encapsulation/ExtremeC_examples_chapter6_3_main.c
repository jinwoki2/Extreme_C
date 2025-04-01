#include "ExtremeC_examples_chapter6_3.h"
#include <stdlib.h>

int	reverse(struct list_t *source, struct list_t *dest)
{
	int		item;
	size_t	i;

	list_clear(dest);
	for (i = list_size(source) - 1; 0 <= i; i--)
	{
		if (list_get(source, i, &item))
			return (-1);
		list_add(dest, item);
	}
	return (0);
}

int	main(void)
{
	struct list_t	*list1;
	struct list_t	*list2;

	list1 = list_malloc();
	list2 = list_malloc();
	/* 생성 */
	list_init(list1);
	list_init(list2);

	list_add(list1, 4);
	list_add(list1, 6);
	list_add(list1, 1);
	list_add(list1, 5);

	list_add(list2, 9);

	reverse(list1, list2);
	list_print(list1);
	list_print(list2);

	/* 소멸 */
	list_destroy(list1);
	list_destroy(list2);
	return (0);
}
