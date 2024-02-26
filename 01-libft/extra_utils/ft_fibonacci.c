#include "../libft.h"

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 1)
	{
		index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (index);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_fibonacci(42));
// 	return (0);
// }