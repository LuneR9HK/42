/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:00:19 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/06 16:00:19 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex_lower(va_list args)
{
	unsigned int	nbr;
	const char		*base;

	nbr = va_arg(args, unsigned int);
	base = "0123456789abcdef";
	return (ft_putnbr_base(nbr, base));
}

int	ft_print_hex_upper(va_list args)
{
	unsigned int	nbr;
	const char		*base;

	nbr = va_arg(args, unsigned int);
	base = "0123456789ABCDEF";
	return (ft_putnbr_base(nbr, base));
}
