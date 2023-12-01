/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:51:36 by nrea              #+#    #+#             */
/*   Updated: 2023/11/30 16:12:19 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line_bonus.h"

int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*s1;
	char	*s2;
	char	*s3;
	int		i;

	fd1 = open( "files/test_file_1_N", O_RDONLY);
	if (fd1 == -1)
	{
		printf ("Erreur ouverture fichier");
		return (1);
	}
	fd2 = open( "files/test_file_2_N", O_RDONLY);
	if (fd2 == -1)
	{
		printf ("Erreur ouverture fichier");
		return (1);
	}
	fd3 = open( "files/test_file_3_N", O_RDONLY);
	if (fd3 == -1)
	{
		printf ("Erreur ouverture fichier");
		return (1);
	}
	i = 1;
	while (1)
	{
		printf("\n--------------Appel getnextline n %d  | fd = %d \n", i, fd1);
		s1 = get_next_line(fd1);
		printf("[%s]", s1);
		printf("\n-----------------------------\n");

		printf("\n--------------Appel getnextline n %d  | fd = %d \n", i, fd2);
		s2 = get_next_line(fd2);
		printf("[%s]", s2);
		printf("\n-----------------------------\n");

		printf("\n--------------Appel getnextline n %d  | fd = %d \n", i, fd3);
		s3 = get_next_line(fd3);
		printf("[%s]", s3);
		printf("\n-----------------------------\n");

		free(s1);
		free(s2);
		free(s3);
		if ( i >= 5)
			break ;
		s1 = NULL;
		s2 = NULL;
		s3 = NULL;
		i++;
	}


// Test le pgm ne va pas au bout du fichier
	// printf("\n--------------Appel getnextline n %d \n", i);
	// s = get_next_line(fd);
	// 	printf("[%s]", s);
	// 	printf("\n-----------------------------\n");
	// 	free(s);
	close(fd1);
	close(fd2);
	close(fd3);
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
