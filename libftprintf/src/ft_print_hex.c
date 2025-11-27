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

	nbr = va_arg(args, unsigned int);
	return (ft_putnbr_base(nbr, "0123456789abcdef"));
}

int	ft_print_hex_upper(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	return (ft_putnbr_base(nbr, "0123456789ABCDEF"));
}
