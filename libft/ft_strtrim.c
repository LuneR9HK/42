/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:33:34 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/21 12:33:34 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_start_trim(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = ft_start_trim(s1, set);
	end = ft_strlen(s1);
	i = 0;
	while (end > start && ft_in_set(s1[end -1], set))
		end--;
	len = end - start;
	strtrim = (char *)malloc((len + 1) * sizeof(char));
	if (!strtrim)
		return (NULL);
	while (i < len)
	{
		strtrim[i] = s1[start + i];
		i++;
	}
	strtrim[i] = '\0';
	return (strtrim);
}
