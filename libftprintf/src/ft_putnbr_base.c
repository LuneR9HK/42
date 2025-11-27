/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:04:05 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/11 15:04:05 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, const char *base)
{
	unsigned long	base_len;
	int				i;

	i = 0;
	base_len = ft_strlen((char *)base);
	if (nbr >= base_len)
		i += ft_putnbr_base(nbr / base_len, base);
	i += ft_putchar(base[nbr % base_len]);
	return (i);
}
