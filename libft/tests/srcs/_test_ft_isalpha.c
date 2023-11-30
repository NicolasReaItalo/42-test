/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_isalpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:46:48 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:58:51 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int test_ft_isalpha(void)
{
    int c;
    int errors;
    c = -20;
    errors = 0;
    ft_print_blue("\n\n[testing ft_isalpha]\n");
    while(c <= 256)
    {
        printf("testing %d (%c) ft_isalpha()-> %d / isalpha()-> %d  ==> ",c,c, ft_isalpha(c), isalpha(c));
        if ((ft_isalpha(c) > 0) && (isalpha(c) > 0))
            ft_print_green("OK\n");
        else if ((ft_isalpha(c) == 0) && (isalpha(c) == 0))
            ft_print_green("OK\n");
        else
        {
            ft_print_red("ERROR\n");
            errors++;
        }
        c++;
    }

    printf("ft_isalpha tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
