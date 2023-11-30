/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:28:45 by nrea              #+#    #+#             */
/*   Updated: 2023/11/20 11:31:11 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"

static void	del_allocated(void *content)
{
	printf("deleting allocated content : %s\n", (char *) content);
	free(content);
}

static void	*lower_str(void *content)
{
	char *s;
	s = (char *) ft_strdup(content);
	int i;

	i = 0;
	while(s[i])
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return ((void *) s);
}

int	test_ft_lstmap()
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_lstmap]\n");

	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;

	char	c1[5] = "ABCD";
	char	c2[5] = "EFGH";
	char	c3[5] = "IJKL";
	char	c4[5] = "MNOP";

	t_list	*new;

	//TST 1
	printf("TEST \n");
	n1 = ft_lstnew((void *) ft_strdup(c1));
	n2 = ft_lstnew((void *) ft_strdup(c2));
	n3 = ft_lstnew((void *) ft_strdup(c3));
	n4 = ft_lstnew((void *) ft_strdup(c4));

	ft_lstadd_front((&n4),n3);
	ft_lstadd_front(&n3,n2);
	ft_lstadd_front(&n2,n1);

	printf("original list:\n");
	ft_display_lst(n1);
	new = ft_lstmap(n1,lower_str,del_allocated);
	printf("new list:\n");
	ft_display_lst(new);
	printf("clear original list\n");
	ft_lstclear(&n1, del_allocated);
	printf("clear new list\n");
	ft_lstclear(&new, del_allocated);

	printf("\nft_lstmap tested : %u errors found\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
