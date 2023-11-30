/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:21 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:01:46 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strdup(void)
{
	int		errors;
	char	*r_or;
	char	*r_ft;
	char 	src1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char 	src2[1] = "";

	errors = 0;


	ft_print_blue("[Testing ft_strdup] \n\n");

	//TEST 1
	printf("TEST 1 - \n");
	printf("src -> [%s]\n", src1);
	r_ft = ft_strdup(src1);
	r_or = strdup(src1);
	printf(" ft_strdup() -> [%s]\n",r_ft);
	printf("    strdup() -> [%s]\n",r_or);
	if ((strcmp(r_or,r_ft) == 0))
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}
	free(r_ft);
	free(r_or);


	//TEST 2
	printf("TEST 2 - \n");
	printf("src -> [%s]\n", src2);
	r_ft = ft_strdup(src2);
	r_or = strdup(src2);
	printf(" ft_strdup() -> [%s]\n",r_ft);
	printf("    strdup() -> [%s]\n",r_or);
	if ((strcmp(r_or,r_ft) == 0))
		ft_print_green("TEST 2 OK\n");
	else
	{
		ft_print_red("TEST 2 FAILED\n");
		errors++;
	}
	free(r_ft);
	free(r_or);

	printf("\nft_strdup tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
