/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_isalnum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:46:48 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:58:46 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int test_ft_isalnum(void)
{
    int c;
    int errors;
    c = 32;
    errors = 0;
    ft_print_blue("[testing ft_isalnum]\n");
    while(c <= 128)
    {
        printf("testing %c ft_isalnum()-> %d / isalnum()-> %d  ==> ",c, ft_isalnum(c), isalnum(c));
        if ((ft_isalnum(c) > 0) && (isalnum(c) > 0))
            ft_print_green("OK\n");
        else if ((ft_isalnum(c) == 0) && (isalnum(c) == 0))
            ft_print_green("OK\n");
        else
        {
            ft_print_red("ERROR\n");
            errors++;
        }
        c++;
    }

    printf("ft_isalnum tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
