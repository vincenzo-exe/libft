#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t i;
	char *new_arr;

	i = 0;
	while (s1[i])
		i++;
	new_arr = malloc(sizeof(char) * (i + 1));
	if (!new_arr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_arr[i] = s1[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}