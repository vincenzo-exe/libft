#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr;
	size_t i;

	i = 0;
	ptr = (const char *)s;
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}