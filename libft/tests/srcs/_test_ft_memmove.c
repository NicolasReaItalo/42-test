/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_memmove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:35:31 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:00:28 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

#define FUNC "ft_memmove"

int	test_ft_memmove(void)
{
	int	errors;
	errors = 0;

	char mem1[240] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *src1 = mem1 + 12;
	char *dest1 = mem1;

	char mem2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *src2 = mem2 + 12;
	char *dest2 = mem2;


	ft_print_blue("[Testing ft_memmove ]\n\n");

	//TEST 1
	printf("TEST 1 \n");
	printf("Before %s : \n mem1 -> [%s]\n src1 -> [%s]\n dst1 -> [%s]\n", FUNC,mem1, src1,dest1);
	printf("Before memmove \n mem2 -> [%s]\n src2 -> [%s]\n dst2 -> [%s]\n",mem2, src2,dest2);

	ft_memmove(dest1, src1, 3);
	memmove(dest2, src2, 3);

	printf("After\n");
	printf("ft:[%s]\nor:[%s]\n",mem1,mem2);
	printf("dst1:[%s]\ndst2:[%s]\n",dest1,dest2);


	if (strcmp(mem1,mem2) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}

// //TEST # NULL
// 	printf("\nTEST 2\ntrying to call ft_memmove with a NULL pointer as source\n");
// 	char *np;
// 	np = NULL;
// 	ft_memmove(dest1, np,10);
// 	ft_print_green("OK (not crashed)\n");

// 	printf("\nTEST 3\ntrying to call ft_memmove with a NULL pointer as dest\n");
// 	ft_memmove(np, src1,10);
// 	ft_print_green("OK (not crashed)\n");


	printf("\nft_memmove tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
