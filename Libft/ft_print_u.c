/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:08:44 by mapierre          #+#    #+#             */
/*   Updated: 2022/12/07 18:20:22 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_print_u(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 10)
	{
		i += (ft_print_c('0' + nb));
	}
	if (nb >= 10)
	{
		i += (ft_print_u(nb / 10));
		i += (ft_print_u(nb % 10));
	}
	return (i);
}
