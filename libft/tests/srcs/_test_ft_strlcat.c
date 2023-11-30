/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strlcat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:21 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:36:53 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strlcat(void)
{
	int	errors;
	int	r_or;
	int	r_ft;
	char src[20] = "XXX";
	char dest1[1000] = "OOOO";
	char dest2[1000] = "OOOO";
	errors = 0;


	ft_print_blue("[Testing ft_strlcat ]\n\n");

	//TEST 1
	int size = 10;
	printf("TEST 1 - \n");
	printf("\nsrc : [%s] (%ld + null )\n",src, strlen(src));
	printf("size = [%d]\n", size);
	printf("Before ft_strlcat : dest1 : [%s]\n",dest1);
	printf("Before    strlcat : dest2 : [%s]\n",dest2);

	r_ft = ft_strlcat(dest1, src,size);
	r_or = strlcat(dest2, src, size);


	printf("After ft_strlcat : dest1 : [%s] return value : [%d]\n",dest1,r_ft);
	printf("After    strlcat : dest2 : [%s] return value : [%d]\n",dest2,r_or);


	if ((strcmp(dest1,dest2) == 0) && (r_ft == r_or))
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}

	printf("\nft_strlcat tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
