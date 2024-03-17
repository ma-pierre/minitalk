/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 04:06:32 by mapierre          #+#    #+#             */
/*   Updated: 2022/12/08 04:33:03 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

unsigned long	ft_print_p(unsigned long nb)
{
	if (nb == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (ft_print_x(nb) + 2);
}
