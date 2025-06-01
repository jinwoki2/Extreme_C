typedef struct s_taste
{
	int	sweet;
	int	sour;
}	t_taste;

typedef struct s_vitamin
{
	int	vitamin_c;
	int vitamin_b;
}	t_vitamin;

typedef struct s_fruit
{
	t_taste		taste;
	t_vitamin	t_vitamin;
	char		name[5];
}	t_fruit;

int main(void)
{
	t_fruit		apple;
	t_taste		*taste_ptr;
	t_vitamin	*vitamin_ptr0;
	t_vitamin	*vitamin_ptr1;
	t_fruit		*fruit_ptr;

	taste_ptr = (t_taste *)&apple;
	vitamin_ptr0 = (t_vitamin *)&apple;
	vitamin_ptr1 = (t_vitamin *)&apple + sizeof(t_taste);
	fruit_ptr = &apple;

	return (0);
}
