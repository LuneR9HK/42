/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:15:25 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/19 15:15:25 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;
	char	*tab;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	tab = malloc(sizeof(char) * i + 1);
	if (!(tab))
		return (NULL);
	i = 0;
	while (str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
