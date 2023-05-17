/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:28:11 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/27 16:29:26 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (ac < 1)
		ac = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(tab[i].str);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
i/*int	main(int argc, char **argv)
{
	int	i;
	struct	s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("\t| original : %s @ %p\n", structs[i].str, structs[i].str);
		printf("\t|     copy : %s @ %p\n", structs[i].copy, structs[i].copy);
		printf("\t|     size : %d\n", structs[i].size);
		i++;
	}
}*/
