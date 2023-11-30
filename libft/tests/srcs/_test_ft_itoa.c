/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:52:06 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:59:12 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

int	test_ft_itoa(void)
{
	int	errors;

	int test_1 = INT_MAX;
	int test_2 = INT_MIN;
	int test_3 = 0;
	int test_4 = 1234;
	int test_5 = -1234;

	char *ref_tst1 = "2147483647";
	char *ref_tst2 = "-2147483648";
	char *ref_tst3 = "0";
	char *ref_tst4 = "1234";
	char *ref_tst5 = "-1234";

	char *p;

	errors = 0;
	ft_print_blue("[Testing ft_itoa]\n");

// TEST 1
	printf("TEST 1 : testing [%d]\n", test_1);
	p = ft_itoa(test_1);
	printf("ft_itoa()-> [%s]", p);
	if (strcmp(p,ref_tst1) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);

// TEST 2
	printf("TEST 2 : testing [%d]\n", test_2);
	p = ft_itoa(test_2);
	printf("ft_itoa()-> [%s]", p);
	if (strcmp(p,ref_tst2) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);

// TEST 3
	printf("TEST 3 : testing [%d]\n", test_3);
	p = ft_itoa(test_3);
	printf("ft_itoa()-> [%s]", p);
	if (strcmp(p,ref_tst3) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);
// TEST 4
	printf("TEST 4 : testing [%d]\n", test_4);
	p = ft_itoa(test_4);
	printf("ft_itoa()-> [%s]", p);
	if (strcmp(p,ref_tst4) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);
// TEST 5
	printf("TEST 5 : testing [%d]\n", test_5);
	p = ft_itoa(test_5);
	printf("ft_itoa()-> [%s]", p);
	if (strcmp(p,ref_tst5) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);

	    printf("ft_itoa tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
