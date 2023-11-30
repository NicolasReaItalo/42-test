/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_lstiter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:28:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:59:35 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"

static void	display(void *content)
{
	printf("displaying content : %s\n", (char *) content);
}

static void	del(void *content)
{
	printf("deleting content : %s\n", (char *) content);
}

int	test_ft_lstiter()
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_lstiter]\n");

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

	//ft_display_lst(n1);
	// printf("After lstiter(&n1)\n");
	ft_lstiter(n1,display);
	// ft_display_lst(n1);


	ft_lstclear(&n1, del);

	//TST 2
	printf("TEST : NULL\n");
	n1 = NULL;

	// ft_display_lst(n1);
	ft_lstiter(n1,display);
	ft_lstclear(&n1,del);

	printf("\nft_lstiter tested : %u errors found\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
