/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:21 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:01:42 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strchr(void)
{
	int	errors;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ|ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	errors = 0;
	ft_print_blue("[Testing ft_strchr]\n\n");
	printf(" string = [%s]\n", s1);

	//TEST 1 - existing character
	printf("TEST 1 existing character : [M]\n");
	printf("ft_strchr(M) -> [%s]\n",ft_strchr(s1,'M'));
	printf("   strchr(M) -> [%s]\n",strchr(s1,'M'));

	if (strcmp(ft_strchr(s1, 'M'),strchr(s1, 'M')) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}
	//TEST 2 -non existing character
	printf("TEST 2 non existing character : [#]\n");
	printf("ft_strchr(#) -> %s\n",ft_strchr(s1,'#'));
	printf("   strchr(#) -> %s\n",strchr(s1,'#'));

	if ((ft_strchr(s1, '#')) == (strchr(s1, '#') ))
		ft_print_green("TEST 2 OK\n");
	else
	{
		ft_print_red("TEST 2 FAILED\n");
		errors++;
	}

	//TEST 3 - end of string character
	printf("TEST 3 end of string character : [0]\n");
	printf("ft_strchr(0) -> %s\n",ft_strchr(s1,'\0'));
	printf("   strchr(0) -> %s\n",strchr(s1,'\0'));

	if (strcmp(ft_strchr(s1, '\0'),strchr(s1, '\0')) == 0)
		ft_print_green("TEST 3 OK\n");
	else
	{
		ft_print_red("TEST 3 FAILED\n");
		errors++;
	}

// //TEST # NULL
// 	char *np;
// 	np = NULL;
// 	printf("\nTEST 4\ntrying to call ft_strchr with a NULL pointer\n");
// 	ft_strchr(np, 'M');
// 	ft_print_green("TEST 4 OK (not crashed)\n");

	    printf("\nft_strchr tested : %u errors found\n\n\n", errors);

	ft_print_blue("______________________________________________________\n\n");

	return (errors);

}
