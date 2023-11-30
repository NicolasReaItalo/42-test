/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/09 12:16:01 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strjoin(void)
{
	int	errors;
	char	*p;

	errors = 0;
	ft_print_blue("[Testing ft_strjoin]\n");

// TEST 1
	p = ft_strjoin("ABC","DEF");
	printf("testing [%s] + [%s]  --> [%s]\n","ABC","DEF",p);
	free(p);

	p = ft_strjoin("","DEF");
	printf("testing [%s] + [%s]  --> [%s]\n","","DEF",p);
	free(p);

	p = ft_strjoin("","");
	printf("testing [%s] + [%s]  --> [%s]\n","","",p);
	free(p);

	// p = ft_strjoin((char *) NULL,"XYZ");
	// printf("testing [%s] + [%s]  --> [%s]\n","NULL","XYZ",p);
	// free(p);

	    printf("ft_strjoin tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
