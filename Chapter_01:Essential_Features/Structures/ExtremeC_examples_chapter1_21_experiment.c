/* Padding이 어떻게 이루어지는지 보기 위한 실험 */
/* 정말 word(아키텍처가 64bit라 했을 때, 4바이트)에 맞추는지 확인 */
#include <stdio.h>

typedef struct s_sample
{
	char	first;
	char	second;
	int		arr[10];
}			t_sample;

int	main(void)
{
	t_sample		var;
	unsigned char	*ptr;
	int				i;

	i = 0;
	while (i < 10)
	{
		var.arr[i] = i;
		i++;
	}
	var.first = 'A';
	var.second = 'B';
	printf("size: %ld\n", sizeof(var));

	printf("content: ");
	ptr = (unsigned char *)&var;
	i = 0;
	while (i < sizeof(var))
	{
		printf("%d ", (unsigned int)*ptr);
		ptr++;
		i++;
	}

	return (0);
}