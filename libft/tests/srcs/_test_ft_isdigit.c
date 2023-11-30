/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_isdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:46:48 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:58:57 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int test_ft_isdigit(void)
{
    int c;
    int errors;
    c = 45;
    errors = 0;
    ft_print_blue("[testing ft_isdigit]\n");
    while(c <= 60)
    {
        printf("testing %c ft_isdigit()-> %d / isdigit()-> %d  ==> ",c, ft_isdigit(c), isdigit(c));
        if ((ft_isdigit(c) > 0) && (isdigit(c) > 0))
            ft_print_green("OK\n");
        else if ((ft_isdigit(c) == 0) && (isdigit(c) == 0))
            ft_print_green("OK\n");
        else
        {
            ft_print_red("ERROR\n");
            errors++;
        }
        c++;
    }

    printf("ft_isdigit tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
