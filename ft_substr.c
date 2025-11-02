/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:31:40 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/19 17:31:40 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			size;
	char			*str;

	i = start;
	j = 0;
	size = 0;
	if ((!s || ft_strlen(s) < start))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		size = ft_strlen(s) - start;
	else
		size = len;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (j < len && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*#include <stdio.h>

int	main()
{
	char const *s;
	//char *str;
	unsigned int start;
	size_t len;

	s = "hello";
	start = 2;
	len = 3;
	//str = ft_substr(s, start, len);	
	
	//printf("%s\n", str);
	printf("%s", ft_substr(s, start, len));
	return (0);
}*/
