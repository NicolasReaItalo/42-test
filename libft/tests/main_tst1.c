/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tst1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:26:41 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:57:21 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	int	errors;

	errors = 0;
	ft_print_blue("##########################################\n");
	ft_print_blue("First set of tests\n");
	ft_print_blue("ft_isalpha\n");
	ft_print_blue("ft_isdigit\n");
	ft_print_blue("ft_isalnum\n");
	ft_print_blue("ft_isascii\n");
	ft_print_blue("ft_isprint\n");
	ft_print_blue("##########################################\n");
	errors += test_ft_isalpha();
	errors += test_ft_isdigit();
	errors += test_ft_isalnum();
	errors += test_ft_isascii();
	errors += test_ft_isprint();

	if(errors)
		ft_print_red("\n\n\n[All tests done : Errors found !] \n");
	else
		ft_print_green("\n\n\n[All tests done : No errors found]\n");
	return 0;
}
