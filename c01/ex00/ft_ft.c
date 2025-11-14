void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	x;

	ft_ft(&x);
	printf("%d", x);
	return (0);
}
