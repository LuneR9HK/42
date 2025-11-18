/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:14:46 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/11 12:14:46 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(char spe, va_list args)
{
	t_handler	handlers[9];
	const char	*conv;
	int			i;

	conv = "cspdiuxX%";
	handlers[0] = &ft_print_char;
	handlers[1] = &ft_print_str;
	handlers[2] = &ft_print_ptr;
	handlers[3] = &ft_print_nbr;
	handlers[4] = &ft_print_nbr;
	handlers[5] = &ft_print_unsigned;
	handlers[6] = &ft_print_hex_lower;
	handlers[7] = &ft_print_hex_upper;
	handlers[8] = &ft_print_percent;
	i = 0;
	while (conv[i])
	{
		if (spe == conv[i])
			return (handlers[i](args));
		i++;
	}
	return (0);
}
