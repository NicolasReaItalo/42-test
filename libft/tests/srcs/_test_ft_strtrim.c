/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/09 12:16:01 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strtrim(void)
{
	int	errors;
	char	*p;

	errors = 0;
	ft_print_blue("[Testing ft_strtrim]\n");

// TEST 1
	p = ft_strtrim("*g*ABCD***","*g");
	printf("testing [%s] + [%s]  --> [%s]\n","***ABCD***","*g",p);
	free(p);
// TEST 2
	p = ft_strtrim("***AB**CD***","*");
	printf("testing [%s] + [%s]  --> [%s]\n","***AB**CD***","*",p);
	free(p);

	p = ft_strtrim("***AB**CD***","");
	printf("testing [%s] + [%s]  --> [%s]\n","***AB**CD***","",p);
	free(p);

	p = ft_strtrim("","*");
	printf("testing [%s] + [%s]  --> [%s]\n","","*",p);
	free(p);

	    printf("ft_strtrim tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
