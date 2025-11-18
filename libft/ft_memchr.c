/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:40:42 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/18 17:40:42 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*hay;
	unsigned char	needle;

	i = 0;
	hay = (unsigned char *)s;
	needle = (unsigned char)c;
	while (i < n)
	{
		if (hay[i] == needle)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
