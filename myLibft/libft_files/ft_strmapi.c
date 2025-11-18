/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoll <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:37:54 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/23 15:37:54 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tab;

	i = -1;
	if (!s || !f)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!tab)
		return (NULL);
	while (s[++i])
		tab[i] = (*f)(i, s[i]);
	tab[i] = '\0';
	return (tab);
}
