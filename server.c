/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <mapierre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:03:49 by mapierre          #+#    #+#             */
/*   Updated: 2023/09/09 19:03:56 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_build_msg(int signal)
{
	static int	bit;
	static char	message[BUFSIZ];
	static int	i;

	if (signal == SIGUSR1)
		message[i] |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (message[i] == '\0')
		{
			ft_printf("%s\n", message);
			ft_memset(message, 0, BUFSIZ);
			i = 0;
		}
		else
		{
			i++;
		}
		bit = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Wrong format, please try ./server\n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID SERVER =%d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, ft_build_msg);
		signal(SIGUSR2, ft_build_msg);
		pause ();
	}
	return (0);
}
