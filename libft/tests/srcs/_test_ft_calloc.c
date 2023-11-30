/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_calloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:58:43 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int    test_ft_calloc(void)
{
	int	errors;
	int *arr1;
	int *arr2;
	char *arr3;
	char *arr4;
	char *arr5;
	char *arr6;

	errors = 0;
	ft_print_blue("[Testing ft_calloc]\n");

// TEST 1
	printf("TEST 1 : testing  20 / sizeof(integers) \n");
	arr1 = ft_calloc(20,sizeof(int));
	arr2 = calloc(20,sizeof(int));
	printf(" ft_calloc()-> ");
	if(arr1)
		ft_display_int_arr(arr1,20);
	else
		printf("[%p]", arr1);
	printf("    calloc()-> ");
	if(arr2)
		ft_display_int_arr(arr2,20);
	else
		printf("[%p]", arr2);

	free(arr1);
	free(arr2);

// TEST 2
	printf("TEST 2 : testing  20 / sizeof(unsigned char) \n");
	arr3 = ft_calloc(20,sizeof(unsigned char));
	arr4 = calloc(20,sizeof(unsigned char));
	printf(" ft_calloc()-> ");
	if(arr3)
		ft_display_char_arr(arr3,20);
	else
		printf("[%p]", arr3);
	printf("    calloc()-> ");
	if(arr4)
		ft_display_char_arr(arr4,20);
	else
		printf("[%p]", arr4);

	free(arr3);
	free(arr4);

// TEST 3

	size_t max = (size_t) -1;

	printf("TEST 3 : testing 100000  / %zu for overflow) \n", max);
	arr5 = ft_calloc(100000, max);
	arr6 = calloc(100000, max);
	printf(" ft_calloc()-> ");
	if(arr5)
		ft_display_char_arr(arr5,1);
	else
		printf("[%p]\n", arr5);
	printf("    calloc()-> ");
	if(arr6)
		ft_display_char_arr(arr6,1);
	else
		printf("[%p]\n", arr6);
	printf("\n");
	printf("\n");

	free(arr5);
	free(arr6);

	    printf("ft_calloc tested \n\n\n");
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
