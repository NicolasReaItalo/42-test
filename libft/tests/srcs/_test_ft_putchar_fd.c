/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_striteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/09 12:16:01 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int	test_ft_putchar_fd(void)
{
	int	errors;
	int fd;

	errors = 0;
	ft_print_blue("[Testing ft_putchar_fd]\n");

// TEST 1
	printf("TEST 1 : testing output [A] ont stdout\n ");
	ft_putchar_fd('A',1);
	printf("\n");
// TEST 2
printf("TEST 2 : testing output [A] in a file\n ");
if ((fd = open("test_putchar_tmp.txt",O_WRONLY | O_CREAT )) != -1)
	{
	ft_putchar_fd('A',fd);
	close(fd);
	}


printf("\n");
	    printf("ft_putchar_fd tested\n\n\n");
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
