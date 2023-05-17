/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:55:05 by lovanden          #+#    #+#             */
/*   Updated: 2023/04/18 13:55:10 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
//Fonction main pour ecrire sur un stdin
int	main(void)
{
	char	*line;

	while ((line = get_next_line(1)))
	{
		printf("%s", line);
		free(line);
	}
	return (0);
}

//Fonction main pour lire un fichier

/*#include <fcntl.h>
#include "get_next_line.h"ß
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}

	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
	}

	close(fd);
	return (0);
}*/