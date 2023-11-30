/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_bzero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:21 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:58:37 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_bzero(void)
{
	int	errors;
	char s1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	errors = 0;
	ft_print_blue("[Testing ft_bzero]\n\n");
	//TEST 1  : chaine de caracteres
	printf("TEST 1 string\n");
	printf("Before bzero : \ns1 : [%s]\ns2 : [%s]\n",s1,s2);
	ft_bzero(s1+2, 10);
	bzero(s2+2, 10);
	printf("After bzero : \nft_bzero : [%s]\n   bzero : [%s]\n",s1,s2);

	if (strcmp(s1,s2) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}




	    printf("\nft_bzero tested : %u errors found\n\n\n", errors);

	ft_print_blue("______________________________________________________\n\n");

	return (errors);

}
