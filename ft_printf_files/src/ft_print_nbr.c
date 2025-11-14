/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:00:25 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/06 16:00:25 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_nbr(va_list args)
{
	int		n;
	int		i;
	long	nbr;

	n = va_arg(args, int);
	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr = -nbr;
	}
	i += ft_putnbr_base(nbr, "0123456789");
	return (i);
}
