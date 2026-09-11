/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmamou <aahmamou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:00:59 by aahmamou          #+#    #+#             */
/*   Updated: 2026/09/11 13:00:59 by aahmamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	dest = (char *)dst;
	source = (const char *)src;
	i = 0;
	if (dest < source)
	{
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = source[i];
		}
	}
	return (dst);
}
