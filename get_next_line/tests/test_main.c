/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:51:36 by nrea              #+#    #+#             */
/*   Updated: 2023/11/30 16:10:37 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*s;
	int		i;

	fd = 0;
	if (argc > 1)
	{
		fd = open( argv[1], O_RDONLY);
		if (fd == -1)
		{
			printf ("Erreur ouverture fichier");
			return (1);
		}
		i = 1;
		while (1)
		{
			printf("\n--------------Appel getnextline n %d \n", i);
			s = get_next_line(fd);
			printf("[%s]", s);
			printf("\n-----------------------------\n");
			if (!s)
				break ;
			free(s);
			s = NULL;
			i++;
		}
	}
	else
	{
		printf("\n--------------Appel getnextline depuis stdin\n");
		s = get_next_line(0);
		printf("[%s]", s);
		printf("\n-----------------------------\n");
		free(s);
		s = NULL;
	}

// Test le pgm ne va pas au bout du fichier
	// printf("\n--------------Appel getnextline n %d \n", i);
	// s = get_next_line(fd);
	// 	printf("[%s]", s);
	// 	printf("\n-----------------------------\n");
	// 	free(s);
	close(fd);
	return (0);
}

/*
[OK] trouver un moyen d'avoir un char * et de pas malloc entre les appels de fonctions
char buf[BUFFER_SIZE + 1];
[] voir pb de timeout avec buffer 1 et grosses lignes ( voir tcousin)
[] test avec stdin
[] verifier la protection de tous les mallocs et read;
[] norminette
[] faire les bonus





*/
