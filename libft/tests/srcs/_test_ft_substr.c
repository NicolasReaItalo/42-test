
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_substr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/10 17:02:46 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_substr(void)
{
	int	errors;
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p1;
	char *p2;
	char *p3;
	char *p4;
	char *p5;

	errors = 0;
	ft_print_blue("[Testing ft_substr]\n");

	printf(" Source :[%s]\n\n",src);

	p1 = ft_substr(src, 0, 26);
	printf("TEST (start = 0 / len = 26) -> [%s]", p1);
	if (!strcmp(p1,"ABCDEFGHIJKLMNOPQRSTUVWXYZ"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAIL]\n");
		errors++;
	}
	free(p1);

	p2 = ft_substr(src, 0, 3);
	printf("TEST (start = 0 / len = 3) -> [%s]", p2);
	if (!strcmp(p2,"ABC"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAIL]\n");
		errors++;
	}
	free(p2);

	p3 = ft_substr(src, 3, 5);
	printf("TEST (start = 3 / len = 5) -> [%s]", p3);
	if (!strcmp(p3,"DEFGH"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAIL]\n");
		errors++;
	}
	free(p3);

	p4 = ft_substr(src, 10, 17);
	printf("TEST (start = 10 / len = 17) -> [%s]", p4);
	if (!strcmp(p4,"KLMNOPQRSTUVWXYZ"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAIL]\n");
		errors++;
	}
	free(p4);

	p5 = ft_substr(src, 30, 5);
	printf("TEST (start = 30 / len = 5) -> [%s]", p5);
	if (!strcmp(p5,""))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAIL]\n");
		errors++;
	}
	free(p5);

	char *p6 = ft_substr((void*)0, 26, 10);
	printf("TEST (NULL-> [%s]", p6);
	if (!p6)
		ft_print_green("[OK NO CRASH]\n");
	else
	{
		ft_print_red("[FAIL]\n");
		errors++;
	}
	free(p6);


	    printf("ft_substr tested\n\n\n");
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
