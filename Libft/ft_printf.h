/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <mapierre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:39:42 by mapierre          #+#    #+#             */
/*   Updated: 2023/06/27 20:42:45 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int				ft_printf(const char *format, ...);
int				ft_print_c(char c);
int				ft_print_s(char *s);
int				ft_print_d(int nb);
unsigned long	ft_print_x(unsigned long nb);
unsigned int	ft_print_xx(unsigned int nb);
unsigned int	ft_print_u(unsigned int nb);
// int				ft_strlen(char *s);
unsigned long	ft_print_p(unsigned long nb);

#endif
