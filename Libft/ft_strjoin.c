/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapierre <mapierre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:22:03 by mapierre          #+#    #+#             */
/*   Updated: 2023/06/28 21:50:56 by mapierre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*snew;

	snew = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!snew)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		snew[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		snew[i] = s2[j];
		i++;
		j++;
	}
	snew[i] = '\0';
	return (snew);
}

char	*ft_realloc(char *s1, char *s2)
{
	size_t		i;
	size_t		j;
	char		*snew;

	if (!s1)
		return (ft_strdup(s2));
	snew = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!snew)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		snew[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		snew[i++] = s2[j++];
	snew[i] = '\0';
	free(s1);
	return (snew);
}
