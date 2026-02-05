#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char dest[] = "xxxxxxxxxx";
	char src[] = "Hey there";
	int n = 6;

	printf("before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("after:  %s\n", dest);
	return (0);
}
