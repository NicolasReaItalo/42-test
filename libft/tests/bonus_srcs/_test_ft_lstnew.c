/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_lstnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:38:38 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:59:52 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"

int	test_ft_lstnew()
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_lstnew]\n");

	char	*content = "Hello!";
	t_list	*node;

	node = ft_lstnew((void *)content);

	printf("node.content = [%s]\n",(char *) (*node).content);
	printf("node.next = [%s]\n", (char *)(*node).next);

	if (!strcmp(node->content, content))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAILED]\n");
		errors++;
	}
	free(node);
	printf("\nft_lstnew tested : %u errors found\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
