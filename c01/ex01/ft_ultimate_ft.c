void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	x;
	int	*ptr_1;
	int	**ptr_2;
	int	***ptr_3;
	int	****ptr_4;
	int	*****ptr_5;
	int	******ptr_6;
	int	*******ptr_7;
	int	********ptr_8;
	int	*********ptr_9;

	ptr_1 = &x;
	ptr_2 = &ptr_1;
	ptr_3 = &ptr_2;
	ptr_4 = &ptr_3;
	ptr_5 = &ptr_4;
	ptr_6 = &ptr_5;
	ptr_7 = &ptr_6;
	ptr_8 = &ptr_7;
	ptr_9 = &ptr_8;
	ft_ultimate_ft(ptr_9);
	printf("%d", x);
	return (0);
}
