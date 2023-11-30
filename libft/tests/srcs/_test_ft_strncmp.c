/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strncmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:42:51 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:02:26 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int ft_get_sign(int n)
{
	if (!n)
		return (0);
	else if (n < 0)
		return -1;
	else
		return (1);

}

int	test_ft_strncmp(void)
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_strncmp]\n");

	printf("TEST 1 : / s1 = [ABC] / s2 = [ABC] / n = 3\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABC","ABC",3));
	printf("   strncmp -> [%d]\n",   strncmp("ABC","ABC",3));

	if ( ft_get_sign(ft_strncmp("ABC","ABC",3)) == ft_get_sign(strncmp("ABC","ABC",3)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	printf("TEST 2 : / s1 = [ABC] / s2 = [abc] / n = 3\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABC","abc",3));
	printf("   strncmp -> [%d]\n",   strncmp("ABC","ac",3));
	if ( ft_get_sign(ft_strncmp("ABC","abc",3)) == ft_get_sign(strncmp("ABC","abc",3)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	printf("TEST 3 : / s1 = [ABCD] / s2 = [ABC] / n = 3\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABCD","ABC",3));
	printf("   strncmp -> [%d]\n",   strncmp("ABCD","ABC",3));
	if ( ft_get_sign(ft_strncmp("ABCD","ABC",3)) == ft_get_sign(strncmp("ABCD","ABC",3)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	printf("TEST 4 : / s1 = [ABCD] / s2 = [ABC] / n = 4\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABCD","ABC",4));
	printf("   strncmp -> [%d]\n",   strncmp("ABCD","ABC",4));
	if ( ft_get_sign(ft_strncmp("ABCD","ABC",4)) == ft_get_sign(strncmp("ABCD","ABC",4)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	printf("TEST 5 : / s1 = [ABC] / s2 = [ABCD] / n = 4\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABC","ABCD",4));
	printf("   strncmp -> [%d]\n",   strncmp("ABC","ABCD",4));
	if ( ft_get_sign(ft_strncmp("ABC","ABCD",4)) == ft_get_sign(strncmp("ABC","ABCD",4)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	printf("TEST 6 : / s1 = [ABC] / s2 = [ABC] / n = 0\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABC","ABC",0));
	printf("   strncmp -> [%d]\n",   strncmp("ABC","ABC",0));
	if ( ft_get_sign(ft_strncmp("ABC","ABC",0)) == ft_get_sign(strncmp("ABC","ABC",0)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

		printf("TEST 7 : / s1 = [ABC] / s2 = [ABZ] / n = 3\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABC","ABZ",3));
	printf("   strncmp -> [%d]\n",   strncmp("ABC","ABZ",3));
	if ( ft_get_sign(ft_strncmp("ABC","ABZ",3)) == ft_get_sign(strncmp("ABC","ABZ",3)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

		printf("TEST 8 : / s1 = [ABC] / s2 = [ABZ] / n = 50\n");
	printf("ft_strncmp -> [%d]\n",ft_strncmp("ABC","ABZ",50));
	printf("   strncmp -> [%d]\n",   strncmp("ABC","ABZ",50));
	if ( ft_get_sign(ft_strncmp("ABC","ABZ",50)) == ft_get_sign(strncmp("ABC","ABZ",50)))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}


//TEST # NULL
	// printf("\nTEST 9\ntrying to call ft_strncmp with a NULL pointer as s1\n");
	// char *np;
	// np = NULL;
	// ft_strncmp("ABC", np,3);
	// ft_print_green("OK (not crashed)\n");

	// printf("\nTEST 10\ntrying to call ft_strncmp with a NULL pointer as s2\n");
	// ft_strncmp(np, "ABC",3);
	// ft_print_green("OK (not crashed)\n");


	printf("\nft_strncmp tested : %u errors found\n\n\n", errors);

	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
