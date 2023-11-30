/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_lstsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:38:38 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:59:56 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"

int	test_ft_lstsize()
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_lstsize]\n");

	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;

	//TST 1
	printf("TEST : 4 nodes \n");
	n1 = ft_lstnew("A");
	n2 = ft_lstnew("B");
	n3 = ft_lstnew("C");
	n4 = ft_lstnew("D");

	ft_lstadd_front(&n4,n3);
	ft_lstadd_front(&n3,n2);
	ft_lstadd_front(&n2,n1);

	ft_display_lst(n1);
	printf(" size = %d\n", ft_lstsize(n1));

	if (ft_lstsize(n1) == 4)
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAILED]\n");
		errors++;
	}
	ft_free_lst(n1);

	//TST 2
	printf("TEST : 0 nodes \n");
	n1 = NULL;

	ft_display_lst(n1);
	printf(" size = %d\n", ft_lstsize(n1));

	if (ft_lstsize(n1) == 0)
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAILED]\n");
		errors++;
	}
	ft_free_lst(n1);

	printf("\nft_lstsize tested : %u errors found\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
