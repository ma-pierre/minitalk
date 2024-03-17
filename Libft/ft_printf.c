/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:47 by mapierre          #+#    #+#             */
/*   Updated: 2022/12/08 21:00:38 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	sort_args(char a, va_list ap)
{
	if (a == '%')
		return (write(1, "%", 1));
	if (a == 'c')
		return (ft_print_c((char)va_arg(ap, int)));
	if (a == 's')
		return (ft_print_s(va_arg(ap, char *)));
	if (a == 'i' || a == 'd')
		return (ft_print_d(va_arg(ap, int)));
	if (a == 'x')
		return (ft_print_x(va_arg(ap, unsigned int)));
	if (a == 'X')
		return (ft_print_xx(va_arg(ap, unsigned int)));
	if (a == 'p')
		return (ft_print_p(va_arg(ap, unsigned long)));
	if (a == 'u')
		return (ft_print_u(va_arg(ap, unsigned int)));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		fc;
	int		i;
	va_list	ap;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			fc = 0;
			fc = sort_args(format[++i], ap);
			if (fc == -1)
				return (0);
			count += fc;
		}
		else
			count += (write(1, &format[i], 1));
		i++;
	}
	va_end(ap);
	return (count);
}
