/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:19:08 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:59:58 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strlcpy(void)
{
	int	errors;
	char src1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest1[1000] = "##############################################";
	char dest2[1000] = "##############################################";
	errors = 0;
	int size = 10;


	ft_print_blue("[Testing ft_strlcpy] \n\n");

	//TEST 1
	printf("TEST 1\n");
	printf("Before ft_strlcpy size [%d] : \nsrc : [%s]\ndest1 : [%s]\n",size, src1,dest1);
	printf("Before    strlcpy : \ndest2 : [%s]\n",dest2);


	ft_strlcpy(dest1, src1, size);
	strlcpy(dest2, src1, size);


	printf("After ft_strlcpy : dest1 : [%s]\n",dest1);
	printf("After    strlcpy : dest2 : [%s]\n",dest2);


	if (strcmp(dest1,dest2) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}

	printf("\nft_strlcpy tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
