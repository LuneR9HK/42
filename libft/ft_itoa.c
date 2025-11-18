/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:37:22 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/22 18:37:22 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_int_len(int *n, int *i)
{
	int	len;
	int	tmp;

	*i = 0;
	tmp = *n;
	len = 0;
	if (*n == 0)
		return (1);
	if ((*n) < 0)
	{
		(*n) = -(*n);
		len++;
		(*i)++;
	}
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;
	int		i;

	if (n == -2147483648)
	{
		tab = ft_strdup("-2147483648");
		return (tab);
	}
	len = ft_int_len(&n, &i);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	if (i != 0)
		tab[0] = '-';
	tab[len] = '\0';
	while (len > i)
	{
		tab[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (tab);
}
