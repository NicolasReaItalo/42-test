/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_memset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:21 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:00:32 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"



int    test_ft_memset(void)
{
	int	errors;
	char s1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
	int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
	errors = 0;
	ft_print_blue("[Testing ft_memset]\n\n");

	//TEST 1  : chaine de caracteres
	printf("TEST 1 string\n");
	printf("Before memset : \ns1 : [%s]\ns2 [%s]\n",s1,s2);
	ft_memset(s1,'*',5);
	memset(s2,'*',5);
	printf("After memset : \n ft_memset : [%s]\n   memset [%s]\n",s1,s2);

	if (strcmp(s1,s2) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}
	//TEST 2  : tableau INT
	printf("\n\nTEST 2 : int array \n");
	printf("Before memset : \narr1 :");
	ft_display_int_arr(arr1, 10);
	printf("arr2 :");
	ft_display_int_arr(arr2, 10);

	ft_memset(arr1,0,5*sizeof(int));
	memset(arr2,0,5*sizeof(int));

	printf("After memset : \nft_memset :");
	ft_display_int_arr(arr1, 10);
	printf("memset :");
	ft_display_int_arr(arr2, 10);

	if (ft_compare_int_array(arr1,arr2,10) == 0)
		ft_print_green("TEST 2 OK\n");
	else
	{
		ft_print_red("TEST 2 FAILED\n");
		errors++;
	}

	// //TEST # NULL
	// printf("\nTEST 3\ntrying to call ft_memset with a NULL pointer\n");
	// char *np;
	// np = NULL;
	// ft_memset(np,0,5*sizeof(int));
	// ft_print_green("OK (not crashed)");

	printf("\nft_memset tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
