/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:51:04 by lovanden          #+#    #+#             */
/*   Updated: 2023/04/15 13:45:33 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_clear(char *buff)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		++i;
	if (!buff[i])
	{
		free(buff);
		return (NULL);
	}
	dst = malloc((ft_strlen(buff) - i + 1));
	if (!dst)
		return (NULL);
	++i;
	j = 0;
	while (buff[i])
		dst[j++] = buff[i++];
	dst[j] = '\0';
	free(buff);
	return (dst);
}

static char	*ft_read(const char *buff)
{
	char	*dst;
	int		i;

	i = 0;
	if (!buff[0])
		return (NULL);
	while (buff[i] && buff[i] != '\n')
		++i;
	dst = malloc(i + 2);
	if (!dst)
		return (NULL);
	i = 0;
	while (buff[i] && buff[i] != '\n')
	{
		dst[i] = buff[i];
		++i;
	}
	if (buff[i] == '\n')
	{
		dst[i] = buff[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_init(int fd, char *buff)
{
	char	str[BUFFER_SIZE + 1];
	int		rd;

	rd = 1;
	while (rd)
	{
		rd = read(fd, str, BUFFER_SIZE);
		if (rd < 0)
		{
			free(buff);
			return (NULL);
		}
		str[rd] = '\0';
		buff = ft_join(buff, str);
		if (ft_strchr(str, '\n'))
			break ;
	}
	return (buff);
}

char	*get_next_line(int fd)
{
	char		*gnl;
	static char	*buff;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	buff = ft_init(fd, buff);
	if (!buff)
		return (NULL);
	gnl = ft_read(buff);
	buff = ft_clear(buff);
	return (gnl);
}
