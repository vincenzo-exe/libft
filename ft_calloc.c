#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	size_t i;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}