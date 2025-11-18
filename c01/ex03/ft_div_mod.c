void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(void)
{
	int x, y;
	int div, mod;
	x = 10;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	printf(" div: %d \n mod: %d", div, mod);
	return (0);
}
