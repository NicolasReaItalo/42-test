/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_isprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:46:48 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:59:01 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int test_ft_isprint(void)
{
    int c;
    int errors;
    c = -1;
    errors = 0;
    ft_print_blue("[testing ft_isprint]\n");
    while(c <= 130)
    {
        printf("testing %d (%c) ft_isprint()-> %d / isprint()-> %d  ==> ",c,c, ft_isprint(c), isprint(c));
        if ((ft_isprint(c) > 0) && (isprint(c) > 0))
            ft_print_green("OK\n");
        else if ((ft_isprint(c) == 0) && (isprint(c) == 0))
            ft_print_green("OK\n");
        else
        {
            ft_print_red("ERROR\n");
            errors++;
        }
        c++;
    }

    printf("ft_isprint tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
