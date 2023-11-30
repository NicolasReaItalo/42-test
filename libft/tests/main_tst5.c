/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tst5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:26:41 by nrea              #+#    #+#             */
/*   Updated: 2023/11/20 10:44:31 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	int	errors;

	errors = 0;
	ft_print_blue("##########################################\n");
	ft_print_blue("Fifth set of tests\n");
	ft_print_blue("test_ft_calloc\n");
	ft_print_blue("test_ft_strdup\n");
	ft_print_blue("test_ft_substr\n");
	ft_print_blue("test_ft_strjoin\n");
	ft_print_blue("test_ft_strtrim\n");
	ft_print_blue("test_ft_split\n");
	ft_print_blue("test_ft_itoa\n");
	ft_print_blue("test_ft_strmapi\n");
	ft_print_blue("test_ft_striteri\n");
	ft_print_blue("##########################################\n");
	errors += test_ft_calloc();
	errors += test_ft_strdup();
	errors += test_ft_substr();
	errors += test_ft_strjoin();
	errors += test_ft_strtrim();
	errors += test_ft_split();
	errors += test_ft_itoa();
	errors += test_ft_strmapi();
	errors += test_ft_striteri();
	if(errors)
		ft_print_red("\n\n\n[All tests done : Errors found !] \n");
	else
		ft_print_green("\n\n\n[All tests done : No errors found]\n");
	return 0;
}
