/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_memcmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:58 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:00:17 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_memcmp(void)
{
	int	errors;
	errors = 0;
	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
	int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
	int arr3[10] = {0,1,2,3,22,5,6,7,8,9};

	char s1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s3[27] = "ABCDEFGHIJ*LMNOPQRSTUVWXYZ";
	int n;


	ft_print_blue("[Testing ft_memcmp]\n");
	// TEST 1
	n = 10;
	printf("TEST 1 : [0,1,2,3,4,5,6,7,8,9]/ [0,1,2,3,4,5,6,7,8,9]/ %d\n", n);
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr2, n * sizeof(int)) );
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr2, n * sizeof(int)) );
	if ((ft_memcmp(arr1, arr2, n * sizeof(int)) == memcmp(arr1, arr1, n * sizeof(int)) ))
		ft_print_green(" TEST 1 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	// TEST 2
	n = 10;
	printf("TEST 2 : : [0,1,2,3,4,5,6,7,8,9]/ [0,1,2,3,22,5,6,7,8,9]/ %d\n", n);
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr3, n * sizeof(int)) );
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr3, n * sizeof(int)) );
	if ((ft_memcmp(arr1, arr3, n * sizeof(int)) == memcmp(arr1, arr3, n * sizeof(int)) ))
		ft_print_green(" TEST 2 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

		// TEST 3
	n = 4;
	printf("TEST 3 : : [0,1,2,3,4,5,6,7,8,9]/ [0,1,2,3,22,5,6,7,8,9] //%d\n", n);
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr3, n * sizeof(int)) );
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr3, n * sizeof(int)) );
	if ((ft_memcmp(arr1, arr3, n * sizeof(int)) == memcmp(arr1, arr3, n * sizeof(int)) ))
		ft_print_green(" TEST 3 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}
/*
	// TEST 4
	n = 154870000;
	printf("TEST 4 : [0,1,2,3,4,5,6,7,8,9]/ [0,1,2,3,4,5,6,7,8,9]/ %d\n", n);
	printf("sizeof -> %ld\n\n", sizeof(arr1));
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr2, n * sizeof(int)) );
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr2, n * sizeof(int)) );
	if ((ft_memcmp(arr1, arr2, n * sizeof(int)) == memcmp(arr1, arr2, n * sizeof(int)) ))
		ft_print_green(" TEST 4 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

*/
	// TEST 5
	n = 0;
	printf("TEST 5 : [0,1,2,3,4,5,6,7,8,9]/ [0,1,2,3,4,5,6,7,8,9]/ %d\n", n);
	//printf("sizeof -> %ld\n\n", sizeof(arr1));
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr2, n * sizeof(int)) );
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr2, n * sizeof(int)) );
	if ((ft_memcmp(arr1, arr2, n * sizeof(int)) == memcmp(arr1, arr2, n * sizeof(int)) ))
		ft_print_green(" TEST 5 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	// TEST 6
	n = 27;
	printf("TEST 6 : [%s]/ [%s]/ %d\n",s1, s2, n);
	//printf("sizeof -> %ld\n\n", sizeof(arr1));
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr2, n) );
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr2, n) );
	if ((ft_memcmp(arr1, arr1, n) == memcmp(arr1, arr1, n) ))
		ft_print_green(" TEST 6 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	// TEST 7
	n = 27;
	printf("TEST 7 : [%s]/ [%s]/ %d\n",s1, s3, n);
	//printf("sizeof -> %ld\n\n", sizeof(arr1));
	printf("memcmp() -> [%d]\n",memcmp(arr1, arr3, n) );
	printf("ft_memcmp() -> [%d]\n",ft_memcmp(arr1, arr3, n) );
	if ((ft_memcmp(arr1, arr3, n) == memcmp(arr1, arr3, n) ))
		ft_print_green(" TEST 7 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

// char *np;
// 	np = NULL;
// 	printf("memcmp() -> [%d]\n",memcmp(np, arr3, n) );
// 	//printf("ft_memcmp() -> [%d]\n",ft_memcmp(np, arr3, n) );


	printf("\nft_memcmp tested : %u errors found\n\n\n", errors);

	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
