typedef struct
{
	int		x;
	int		y;
}			point_t;

typedef struct
{
	point_t	center;
	int		radius;
}			circle_t;

typedef struct
{
	point_t	start;
	point_t end;
}			line_t;


/* 각 자료형의 크기를 알아보자 */
void	is_structre_size(void)
{
	point_t	size;
	size.x = sizeof(int);
	size.x = sizeof(point_t);
	size.x = sizeof(circle_t);
	size.x = sizeof(line_t);
}
