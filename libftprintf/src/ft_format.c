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
	int				i;	
	const char		g_conv_tab[9] = "cspdiuxX%";
	const t_handler	g_handler_tab[9] = {
		&ft_print_char,
		&ft_print_str,
		&ft_print_ptr,
		&ft_print_nbr,
		&ft_print_nbr,
		&ft_print_unsigned,
		&ft_print_hex_lower,
		&ft_print_hex_upper,
		&ft_print_percent,
	};

	i = 0;
	while (g_conv_tab[i])
	{
		if (spe == g_conv_tab[i])
			return (g_handler_tab[i](args));
		i++;
	}
	return (0);
}
