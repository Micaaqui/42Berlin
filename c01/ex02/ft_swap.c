void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main(void)
{
	int x, y;
	x = 10;
	y = 20;
	printf("before\n %d %d\n", x, y);
	ft_swap(&x, &y);
	printf("after\n %d %d\n", x, y);
	return (0);
}
