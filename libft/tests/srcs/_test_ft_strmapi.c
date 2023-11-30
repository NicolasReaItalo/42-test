/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strmapi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:03:00 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:02:22 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "tests.h"

char	ft_to_upper_even(unsigned int index, char c)
{
	if ( index%2 == 0)
		return (ft_toupper(c));
	else
		return (c);

}


int    test_ft_strmapi(void)
{
	int	errors;
	char *s1 = "abcdefghijklmnopqrstuvwxyz123456789/*-++";
	char *s2 = "";
	char *ret1 = "AbCdEfGhIjKlMnOpQrStUvWxYz123456789/*-++";
	char *ret2 = "";

	char *p = NULL;


	errors = 0;
	ft_print_blue("[Testing ft_strmapi]\n");

// TEST 1
	p = ft_strmapi(s1, ft_to_upper_even);
	printf("TEST 1 :\n           src [%s]\nft_strmapi()-> [%s]/" ,s1, p);
	if (strcmp(p, ret1) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);

// TEST 2
	p = ft_strmapi(s2, ft_to_upper_even);
	printf("TEST 2 :\n           src [%s]\nft_strmapi()-> [%s]/" ,s2, p);
if (strcmp(p, ret2) == 0)
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);

// TEST NULL
	char *p2 = NULL;
	printf("\nTEST pointer NULL");
	p = ft_strmapi(p2, ft_to_upper_even);
if (p == NULL)
		ft_print_green("OK (NOT CRASHED)\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	free(p);


	    printf("ft_strmapi tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
