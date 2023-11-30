/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:37:12 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:03:36 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

int	test_ft_putnbr_fd(void)
{
	int	errors;
	int fd;

	errors = 0;
	// ft_print_blue("Testing ft_putnbr_fd\n");

// TEST 1
	// printf("TEST 1 : testing  INT_MAX ont stdout\n ");
	// ft_putnbr_fd(INT_MAX,1);
	printf("\n");

	// TEST 1
	// printf("TEST 2 : testing  INT_MIN ont stdout\n ");
	ft_putnbr_fd(INT_MAX,1);
	printf("\n");
// TEST 2
// printf("TEST 3 : testing output -1234 in a file\n ");
if ((fd = open("test_putnbr_tmp.txt",O_WRONLY | O_CREAT )) != -1)
	{
	ft_putnbr_fd(-1234,fd);
	close(fd);
	}


printf("\n");
	    printf("ft_putnbr_fd tested\n\n\n");
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
