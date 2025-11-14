/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:59:35 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/19 15:59:35 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if ((nmemb == 0) || (size == 0))
	{
		tab = malloc(0);
		return (tab);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	tab = (void *)malloc(nmemb * size);
	if (tab != NULL)
		ft_bzero(tab, size * nmemb);
	return (tab);
}
