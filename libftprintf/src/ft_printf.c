/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:23 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/06 14:10:23 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!format)
		return (-1);
	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format(format[++i], args);
			i++;
		}
		else
			len += ft_putchar(format[i++]);
	}
	va_end(args);
	return (len);
}
