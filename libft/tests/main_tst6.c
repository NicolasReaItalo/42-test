/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tst6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:26:41 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 17:33:27 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	int	errors;

	errors = 0;
	ft_print_blue("##########################################\n");
	ft_print_blue("6th set of tests\n");
	ft_print_blue("test_ft_putchar_fd\n");
	ft_print_blue("test_ft_putstr_fd\n");
	ft_print_blue("test_ft_putendl_fd\n");
	ft_print_blue("test_ft_putnbr_fd\n");
	ft_print_blue("##########################################\n");
	errors += test_ft_putchar_fd();
	errors += test_ft_putstr_fd();
	errors += test_ft_putendl_fd();
	errors += test_ft_putnbr_fd();
	if(errors)
		ft_print_red("\n\n\n[All tests done : Errors found !] \n");
	else
		ft_print_green("\n\n\n[All tests done : No errors found]\n");
	return 0;
}
