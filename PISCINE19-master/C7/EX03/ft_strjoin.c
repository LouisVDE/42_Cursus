/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:07:39 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/26 17:47:09 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	str_final_len(char **strs, int size, int sep)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_str_len(strs[i]);
		final_len *= sep;
		i++;
	}
	final_len -= sep;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*str;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = str_final_len(strs, size, ft_str_len(sep));
	str = (char *)malloc((full_len + 1) * sizeof(char));
	d = str;
	if (!d)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_len(sep);
		}
	}
	*d = '\0';
	return (str);
}
/*#include <stdio.h>

int main()
{
	char	**strs;
	char	*sep;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 8 + 1);
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[0] = (char *)malloc(sizeof(char) * 6 + 1);
	strs[0] = "Bonjour,";
	strs[1] = "TEST,";
	strs[2] = "12345.";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}*/
