#include <stdio.h>

void	print_str(void *string)
{
	char	*str;

	str = (char *)string;
	printf("%s\n", str);
}

int	main(void)
{
	void			*str;
	void			(*fptr0)(void *);
	typedef	void	(*fptr1)(void *);
	fptr1			fptr_var;
	
	str = "It's a string";
	fptr0 = print_str;
	fptr_var = print_str;
	
	fptr0(str);
	fptr_var(str);

	return (0);
}