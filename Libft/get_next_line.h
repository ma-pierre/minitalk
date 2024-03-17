/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <mapierre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:42:26 by mapierre          #+#    #+#             */
/*   Updated: 2023/06/27 20:45:21 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include "libft.h"

char	*get_next_line(int fd);
// char	*ft_strdup(char *s);
int		ft_get_n(char *memo);
// char	*ft_strjoin(char *s1, char *s2);
// int		ft_strlen(char *s);
char	*ft_substr_frees(char *s, unsigned int start, size_t len);
char	*ft_create_line(char *memo, int n);
char	*join_to_memo(char *memo, char *buf);
char	*read_join(char *memo, int fd, char **line);

#endif
