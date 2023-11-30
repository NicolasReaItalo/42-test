/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_atoi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/09 12:16:01 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int    test_ft_atoi(void)
{
	int	errors;
	char *s1 = "2147483647";
	char *s2 = "-2147483648";
	char s3[12] = {' ','\f', '\n','\r', '\t', '\v','1','2','3','4','5', '\0'};
	char *s4 = "";
	char *s5 = "--12345";
	char *s6 = "12345hwferufg";
	char *s7 = "+12345hwferufg";

	errors = 0;
	ft_print_blue("[Testing ft_atoi]\n");



// TEST 1
	printf("TEST 1 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s1, ft_atoi(s1), atoi(s1));
	if (ft_atoi(s1) == atoi(s1))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
// TEST 2
	printf("TEST 2 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s2, ft_atoi(s2), atoi(s2));
	if (ft_atoi(s2) == atoi(s2))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
// TEST 3
	printf("TEST 3 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s3, ft_atoi(s3), atoi(s3));
	if (ft_atoi(s3) == atoi(s3))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
// TEST 4
	printf("TEST 4 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s4, ft_atoi(s4), atoi(s4));
	if (ft_atoi(s4) == atoi(s4))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
// TEST 5
	printf("TEST 5 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s5, ft_atoi(s5), atoi(s5));
	if (ft_atoi(s5) == atoi(s5))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
// TEST 6
	printf("TEST 6 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s6, ft_atoi(s6), atoi(s6));
	if (ft_atoi(s6) == atoi(s6))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
// TEST 7
	printf("TEST 7 : testing [%s] ft_atoi()-> %d/ atoi()-> %d ==> " ,s7, ft_atoi(s7), atoi(s7));
	if (ft_atoi(s7) == atoi(s7))
		ft_print_green("OK\n");
	else
	{
		ft_print_red("ERROR\n");
		errors++;
	}
	    printf("ft_atoi tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
