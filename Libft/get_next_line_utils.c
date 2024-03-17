/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <mapierre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:04:00 by mapierre          #+#    #+#             */
/*   Updated: 2023/06/27 20:44:01 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	size_t		i;
// 	size_t		j;
// 	char		*snew;

// 	snew = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
// 	if (!snew)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i])
// 	{
// 		snew[i] = s1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (s2[j])
// 	{
// 		snew[i] = s2[j];
// 		i++;
// 		j++;
// 	}
// 	snew[i] = '\0';
// 	return (snew);
// }

// char	*ft_strdup(char *s)
// {
// 	int		i;
// 	char	*dup;

// 	i = ft_strlen(s);
// 	dup = malloc((i + 1) * sizeof(char));
// 	if (!dup)
// 		return (NULL);
// 	i = 0;
// 	while (s[i])
// 	{
// 		dup[i] = s[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	return (dup);
// }

int	ft_get_n(char *memo)
{
	int	i;

	i = 0;
	if (memo == NULL)
		return (-1);
	while (memo[i] != '\0')
	{
		if (memo[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

// int	ft_strlen(char *s)
// {
// 	int	i;

// 	if (!s)
// 		return (0);
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }
