/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:17:32 by lovanden          #+#    #+#             */
/*   Updated: 2023/04/13 18:20:06 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	const char	i;

	i = c;
	while (*s != i)
	{
		if (*s == '\0')
			return (NULL);
		++s;
	}
	return ((char *)s);
}

char	*ft_join(char *s1, const char *s2)
{
	char	*dst;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	dst = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dst)
	{
		free(s1);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i])
		dst[j++] = s1[i++];
	i = 0;
	while (s2[i])
		dst[j++] = s2[i++];
	dst[j] = '\0';
	free(s1);
	return (dst);
}
