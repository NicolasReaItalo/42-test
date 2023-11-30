/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_putstr_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:53:28 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 16:01:27 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int	test_ft_putstr_fd(void)
{
	int	errors;
	int fd;

	errors = 0;
	ft_print_blue("[Testing ft_putstr_fd]\n");

// TEST 1
	printf("TEST 1 : testing output [ABCDEFGH] ont stdout\n ");
	ft_putstr_fd("ABCDEFGH",1);
	printf("\n");
// TEST 2
	printf("TEST 2 : testing output [ABCDEFGH] in a file\n ");
	if ((fd = open("test_putstr_tmp.txt",O_WRONLY | O_CREAT )) != -1)
	{
		ft_putstr_fd("ABCDEFGH",fd);
		close(fd);
	}


printf("\n");
	    printf("ft_putstr_fd tested\n\n\n");
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
