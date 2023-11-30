/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_tolower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:48:44 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:02:49 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

int	test_ft_tolower(void)
{
	int	errors;
	unsigned int c;

	ft_print_blue("[Testing ft_tolower ]\n\n");
	//TEST 1
	printf("TEST 1 - \n");
    c = 32;
    errors = 0;
    while(c <= 128)
    {
        printf("testing %c ft_tolower()-> %c / toupper()-> %c  ==> ",c, ft_toupper(c), tolower(c));
        if (ft_tolower(c) ==  tolower(c))
            ft_print_green("OK\n");
        else
        {
            ft_print_red("ERROR\n");
            errors++;
        }
        c++;
    }

	printf("\nft_tolower tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
