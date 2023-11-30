/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_memcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:21 by nrea              #+#    #+#             */
/*   Updated: 2023/11/09 12:57:16 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_memcpy(void)
{
	int	errors;
	char src1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest1[1000] = "";
	char src2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest2[1000] = "";
	errors = 0;
	ft_print_blue("[Testing ft_memcpy]\n\n");

	//TEST 1  : chaine de caracteres
	printf("TEST 1 string\n");
	printf("Before ft_memcpy : \nsrc : [%s]\ndest : [%s]\n",src1,dest2);
	ft_memcpy(dest1, src1, 27);
	memcpy(dest2, src2, 27);
	printf("After ft_memcpy : \nsrc : [%s]\ndest : [%s]\n",src1,dest2);
	if (strcmp(dest1,dest2) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}
// //TEST # NULL
// 	printf("\nTEST 2\ntrying to call ft_memcpy with a NULL pointer as source\n");
// 	char *np;
// 	np = NULL;
// 	ft_memcpy(dest1, np,10);
// 	ft_print_green("OK (not crashed)\n");

// 	printf("\nTEST 3\ntrying to call ft_memcpy with a NULL pointer as dest\n");
// 	ft_memcpy(np, src1,10);
// 	ft_print_green("OK (not crashed)\n");

	printf("\nft_memcpy tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
