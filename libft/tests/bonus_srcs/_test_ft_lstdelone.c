/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_lstdelone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:38:38 by nrea              #+#    #+#             */
/*   Updated: 2023/11/20 11:42:17 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"

static void	del(void *content)
{
	printf("deleted content : %s\n", (char *) content);
	free(content);
}

int	test_ft_lstdelone()
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_lstdelone]\n");

	char	*content = "Hello!";
	t_list	*node;

	node = ft_lstnew((void *) ft_strdup(content));
	printf("Before ft_lstdelone\n");
	ft_display_lst(node);

	ft_lstdelone(node,del);
	printf("\nft_lstdelone tested : %u errors found\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
