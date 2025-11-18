/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:50:54 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/12 17:50:54 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(va_list args)
{
	unsigned int	n;

	n = va_arg(args, int);
	return (ft_putnbr_base(n, "0123456789"));
}
