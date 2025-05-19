#include <stdio.h>

typedef struct s_rect
{
	int	width;
	int	length;
}				t_rect;

int	rect_area(t_rect *rect)
{
	return (rect->width * rect->length);
}

int	main(void)
{
	t_rect	rect;
	int		area;
	
	rect.width = 10;
	rect.length = 25;

	area = rect_area(&rect);
	printf("Area: %d", area);

	return (0);
}