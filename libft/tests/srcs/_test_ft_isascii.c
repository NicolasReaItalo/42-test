/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_isascii.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:46:48 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:58:54 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include "tests.h"

int test_ft_isascii(void)
{
    int c;
    int errors;
    c = -10;
    errors = 0;
    ft_print_blue("[testing ft_isalnum]\n");
    while(c <= 130)
    {
        printf("testing %c ft_isascii()-> %d / isascii()-> %d  ==> ",c, ft_isascii(c), isascii(c));
        if ((ft_isascii(c) > 0) && (isascii(c) > 0))
            ft_print_green("OK\n");
        else if ((ft_isascii(c) == 0) && (isascii(c) == 0))
            ft_print_green("OK\n");
        else
        {
            ft_print_red("ERROR\n");
            errors++;
        }
        c++;
    }

    printf("ft_isascii tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
