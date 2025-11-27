/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:00:11 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/06 16:00:11 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_ptr(va_list args)
{
	void			*ptr;
	unsigned long	addr;
	int				i;
	char			*ptr_base;

	ptr = va_arg(args, void *);
	addr = (unsigned long)ptr;
	ptr_base = "0123456789abcdef";
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	i = 0;
	i = ft_putstr("0x");
	i += ft_putnbr_base(addr, ptr_base);
	return (i);
}
