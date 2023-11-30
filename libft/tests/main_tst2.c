/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tst2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:26:41 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:57:16 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	int	errors;

	errors = 0;
	ft_print_blue("##########################################\n");
	ft_print_blue("Second set of tests\n");
	ft_print_blue("test_ft_memset\n");
	ft_print_blue("test_ft_bzero\n");
	ft_print_blue("test_ft_memcpy\n");
	ft_print_blue("test_ft_memmove\n");
	ft_print_blue("##########################################\n");
	errors += test_ft_strlen();
	errors += test_ft_memset();
	errors += test_ft_bzero();
	errors += test_ft_memcpy();
	errors += test_ft_memmove();
	if(errors)
		ft_print_red("\n\n\n[All tests done : Errors found !] \n");
	else
		ft_print_green("\n\n\n[All tests done : No errors found]\n");
	return 0;
}
