/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:16:12 by mapierre          #+#    #+#             */
/*   Updated: 2022/12/08 00:17:04 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_print_xx(unsigned int nb)
{
	char	c;
	char	*base;
	int		i;

	i = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
		i += ft_print_xx(nb / 16);
	c = base[nb % 16];
	write (1, &c, 1);
	return (i + 1);
}
