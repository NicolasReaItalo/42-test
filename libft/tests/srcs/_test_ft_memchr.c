/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_memchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:09:23 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:00:13 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

int	test_ft_memchr(void)
{
	int	errors;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ|ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	errors = 0;
	ft_print_blue("[Testing ft_memchr]\n\n");
	printf(" string = [%s]\n", s1);

	//TEST 1 - existing character
	printf("TEST 1 existing character : [M] / size : [54]\n");
	printf("ft_memchr(M) -> [%s]\n",(char *)ft_memchr(s1,'M',54));
	printf("   memchr(M) -> [%s]\n",(char *)memchr(s1,'M',54));

	if (strcmp(ft_memchr(s1, 'M',54),memchr(s1, 'M',54)) == 0)
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}
	//TEST 2 -non existing character
	printf("TEST 2 non existing character : [#] / size : [54]\n");
	printf("ft_memchr(#) -> %s\n", (char *) ft_memchr(s1,'#', 54));
	printf("   memchr(#) -> %s\n", (char *) memchr(s1,'#', 54));

	if ((ft_memchr(s1, '#', 54)) == (memchr(s1, '#', 54) ))
		ft_print_green("TEST 2 OK\n");
	else
	{
		ft_print_red("TEST 2 FAILED\n");
		errors++;
	}

	//TEST 3 - end of string character
	printf("TEST 3 end of string character : [0] / size : 54\n");
	printf("ft_memchr(0) -> %s\n",(char *)ft_memchr(s1,'\0', 54));
	printf("   memchr(0) -> %s\n",(char *)memchr(s1,'\0', 54));

	if (strcmp(ft_memchr(s1, '\0', 54),memchr(s1, '\0', 54)) == 0)
		ft_print_green("TEST 3 OK\n");
	else
	{
		ft_print_red("TEST 3 FAILED\n");
		errors++;
	}

	//TEST 5 - existing character size 0 - deactivate -Werror
	// printf("TEST 5 existing character : [M] / size : [0]\n");
	// printf("ft_memchr(M) -> [%s]\n",(char *)ft_memchr(s1,'M',0));
	// //deactivate -Werror to compile the test
	// printf("   memchr(M) -> [%s]\n",(char *)memchr(s1,'M',0));


//TEST # NULL
	// char *np;
	// np = NULL;
	// printf("\nTEST 6\ntrying to call ft_memchr with a NULL pointer\n");
	// ft_memchr(np, 'M', 1);
	// ft_print_green("TEST 6 OK (not crashed)\n");

	ft_print_blue("______________________________________________________\n\n");

	return (errors);

}
