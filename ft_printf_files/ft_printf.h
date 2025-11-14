/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:59:31 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/07 15:59:31 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

typedef int	(*t_handler)(va_list args);

int				ft_printf(const char *format, ...);
int				ft_format(char spe, va_list args);
int				ft_print_char(va_list args);
int				ft_print_str(va_list args);
int				ft_print_ptr(va_list args);
int				ft_print_nbr(va_list args);
int				ft_print_hex_lower(va_list args);
int				ft_print_hex_upper(va_list args);
int				ft_print_unsigned(va_list args);
int				ft_print_percent(va_list args);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr_base(unsigned long nbr, const char *base);
size_t			ft_strlen(char *str);
#endif
