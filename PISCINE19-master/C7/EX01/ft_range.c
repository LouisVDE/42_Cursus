/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:43:18 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/26 17:47:29 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	if (min >= max)
		return (NULL);
	t = malloc((max - min) * sizeof(int));
	if (!t)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
/*#include <stdio.h>
int main(void)
{
  int a;
  int *taba;
  taba = ft_range(2, 10);
  a = 0;
  while (taba[a])
  {
    printf("%d", taba[a]);
    a++;
  }
  return (0);
}*/
