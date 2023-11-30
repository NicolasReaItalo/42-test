/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tst4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:26:41 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 17:12:13 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	int	errors;

	errors = 0;
	ft_print_blue("##########################################\n");
	ft_print_blue("Fourth set of tests\n");
	ft_print_blue("test_ft_toupper\n");
	ft_print_blue("test_ft_tolower\n");
	ft_print_blue("test_ft_strchr\n");
	ft_print_blue("test_ft_strncmp\n");
	ft_print_blue("test_ft_memchr\n");
	ft_print_blue("test_ft_memcmp\n");
	ft_print_blue("test_ft_strnstr\n");
	ft_print_blue("test_ft_atoi\n");
	ft_print_blue("##########################################\n");
	errors += test_ft_toupper();
	errors += test_ft_tolower();
	errors += test_ft_strchr();
	errors += test_ft_strrchr();
	errors += test_ft_strncmp();
	errors += test_ft_memchr();
	errors += test_ft_memcmp();
	errors += test_ft_strnstr();
	errors += test_ft_atoi();

	if(errors)
		ft_print_red("\n\n\n[All tests done : Errors found !] \n");
	else
		ft_print_green("\n\n\n[All tests done : No errors found]\n");
	return 0;
}
