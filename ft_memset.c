#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	size_t i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}