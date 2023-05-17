/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:37:32 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/26 17:46:58 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (!*range)
		return (-1);
	i = -1;
	while (++i < max)
		(*range)[i] = min + i;
	return (max);
}
/*#include <stdio.h>
int main(void)
{
  int min;
  int max;
  int *tab;
  int size;
  int i = 0;
  min = 5;
  max = 10;
  size = ft_ultimate_range(&tab, min, max);
  while(i < size)
  {
    printf("%d", tab[i]);
    i++;
  }
}*/
