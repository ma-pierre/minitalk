/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:16:12 by mapierre          #+#    #+#             */
/*   Updated: 2022/12/08 04:02:17 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_print_x(unsigned long nb)
{
	char	c;
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		i += ft_print_x(nb / 16);
	c = base[nb % 16];
	write (1, &c, 1);
	return (i + 1);
}
