/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_striteri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:35:04 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:01:50 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

static void	ft_to_upper_even_pointer(unsigned int index, char *c)
{
	if ( index%2 == 0)
		*c = ft_toupper(*c);
}


int    test_ft_striteri(void)
{
	int	errors;
	char s1[41] = "abcdefghijklmnopqrstuvwxyz123456789/*-++";
	char s2[1] = "";
	char *ret1 = "AbCdEfGhIjKlMnOpQrStUvWxYz123456789/*-++";
	char *ret2 = "";

	errors = 0;
	ft_print_blue("[Testing ft_striteri]\n");

// TEST 1
	printf("TEST 1 :\n            src [%s]\n" ,s1);
	ft_striteri(s1, ft_to_upper_even_pointer);
	printf("ft_striteri()-> [%s]\n", s1);
	if (strcmp(s1, ret1) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}

// TEST 2
	printf("TEST 2 :\n            src [%s]\n" , s2);
	ft_striteri(s2, ft_to_upper_even_pointer);
	printf("ft_striteri()-> [%s]\n", s2);

if (strcmp(s2, ret2) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}

// TEST NULL
	// char *p2 = NULL;
	// printf("\nTEST pointer NULL");
	// ft_striteri(p2, ft_to_upper_even_pointer);
	// ft_print_green("OK (NOT CRASHED)\n");



	    printf("ft_striteri tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
