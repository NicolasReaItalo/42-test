/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strrchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:15:36 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:02:40 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

int	test_ft_strrchr(void)
{
	int	errors;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ|ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	errors = 0;
	ft_print_blue("[Testing ft_strrchr]\n\n");
	printf(" string = [%s]\n", s1);

	//TEST 1 - existing character
	printf("\nTEST 1 existing character : [M]\n");
	printf("ft_strrchr(M) -> [%s]\n",ft_strrchr(s1,'M'));
	printf("   strrchr(M) -> [%s]\n",strrchr(s1,'M'));

	if (strcmp(ft_strrchr(s1, 'M'),strrchr(s1, 'M')) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}
	//TEST 2 -non existing character
	printf("\nTEST 2 non existing character : [#]\n");
	printf("ft_strrchr(#) -> %s\n",ft_strrchr(s1,'#'));
	printf("   strrchr(#) -> %s\n",strrchr(s1,'#'));

	if ((ft_strrchr(s1, '#')) == (strrchr(s1, '#') ))
		ft_print_green("TEST 2 OK\n");
	else
	{
		ft_print_red("TEST 2 FAILED\n");
		errors++;
	}

	//TEST 3 - end of string character
	printf("\nTEST 3 end of string character : [0]\n");
	printf("ft_strrchr(0) -> [%s]\n",ft_strrchr(s1,'\0'));
	printf("   strrchr(0) -> [%s]\n",strrchr(s1,'\0'));

	if (strcmp(ft_strrchr(s1, '\0'),strrchr(s1, '\0')) == 0)
		ft_print_green("TEST 3 OK\n");
	else
	{
		ft_print_red("TEST 3 FAILED\n");
		errors++;
	}

//TEST # NULL
	// char *np;
	// np = NULL;
	// printf("\nTEST 4\ntrying to call ft_strrchr with a NULL pointer\n");
	// ft_strrchr(np, 'M');
	// ft_print_green("TEST 4 OK (not crashed)\n");

	    printf("\nft_strrchr tested : %u errors found\n\n\n", errors);

	ft_print_blue("______________________________________________________\n\n");

	return (errors);

}
