/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_strnstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:26:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 19:31:36 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ft_strnstr(void)
{
	int	errors;

	char b1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *l1 = "DEF";
	 char *l2 = "XYZ";
	 char *l3 = "";
	 char *l4 = "****";
	char *l5 = "***********************************";
	size_t len;

	errors = 0;


	ft_print_blue("[Testing ft_strnstr] \n\n");
	// // TEST 1
	len = 5;
	printf("TEST 1 : [%s]/ [%s]/ %zu\n", b1, l1,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l1, len ));
	printf("strnstr() -> [%s]\n",strnstr(b1, l1, len) );
	// if (strcmp(ft_strnstr(b1, l1, len), strnstr(b1, l1, len) ) == 0)
	// 	ft_print_green(" TEST 1 OK\n");
	// else
	// {
	// 	ft_print_red("FAILED\n");
	// 	errors++;
	// }

	// TEST 2
	len = 27;
	printf("TEST 2 : [%s]/ [%s]/ %zu\n", b1, l2,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l2, len) );
	printf("strnstr() -> [%s]\n",strnstr(b1, l2, len) );
	if ((strcmp(ft_strnstr(b1, l2, len), strnstr(b1, l2, len) ) == 0))
		ft_print_green(" TEST 2 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}
	// TEST 3
	len = 27;
	printf("TEST 3 : [%s]/ [%s]/ %zu\n", b1, l3,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l3, len) );
	printf("strnstr() -> [%s]\n",strnstr(b1, l3, len) );

	if (ft_strnstr(b1, l3, len) && strnstr(b1, l3, len) && (strcmp(ft_strnstr(b1, l3, len), strnstr(b1, l3, len) ) == 0))
		ft_print_green(" TEST 3 OK\n");
	else
	{
		ft_print_red("FAILED\n");
		errors++;
	}

	// TEST 4
	len = 27;
	printf("TEST 4 : [%s]/ [%s]/ %zu\n", b1, l4,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l4, len) );
	printf("strnstr() -> [%s]\n",strnstr(b1, l4, len) );

	// TEST 5
	len = 0;
	printf("TEST 5 : [%s]/ [%s]/ %zu\n", b1, l4,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l4, len) );
	printf("strnstr() -> [%s]\n",strnstr(b1, l4, len) );

	// TEST 6
	len = 27;
	printf("TEST 6 : [%s]/ [%s]/ %zu\n", b1, l5,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l5, len) );
	printf("strnstr() -> [%s]\n",strnstr(b1, l5, len) );

	// TEST 7
	len = 500;
	printf("TEST 7 : [%s]/ [%s]/ %zu\n", b1, l5,  len);
	printf("ft_strnstr() -> [%s]\n",ft_strnstr(b1, l5, len) );
	printf("strnstr() -> [%s]\n",strnstr(b1, l5, len) );


	printf("\nft_strnstr tested : %u errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
