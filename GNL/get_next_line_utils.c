/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:47:22 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/14 17:47:22 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		i;
	size_t		j;
	char		*dest;

	if (!s2)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1)
		s1 = ft_strdup("");
	if (!dest)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[j])
		dest[i++] = s1[j++];
	j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*dup;

	if (!s)
		return (NULL);
	dup = (char *)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (len == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
