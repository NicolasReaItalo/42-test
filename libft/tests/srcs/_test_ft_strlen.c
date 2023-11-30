/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:02:13 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int    test_ft_strlen(void)
{
	int	errors;
	char *s1 = "ABCDEFGHIJHLMNOPQRSTUVWXYZ";
	char *s2 = "";
	errors = 0;
	ft_print_blue("[Testing ft_strlen]\n");

// TEST 1 alphabet
	printf("TEST 1 : testing [%s] ft_strlen()-> %ld / strlen()-> %ld  ==> " ,s1, ft_strlen(s1), strlen(s1));
	if (ft_strlen(s1) == strlen(s1))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	// TEST 2 empty string
	printf("TEST 2 : testing [%s] ft_strlen()-> %ld / strlen()-> %ld  ==> " ,s2, ft_strlen(s2), strlen(s2));
	if (ft_strlen(s1) == strlen(s1))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}

	// // TEST 3 NULL pointer
	// char *np;
	// np = NULL;
	// printf("TEST 3 : testing [NULL] ft_strlen()-> %ld\n\n", ft_strlen(np));


	    printf("ft_strlen tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
