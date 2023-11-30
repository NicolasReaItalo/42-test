/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_lstadd_back.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:52:00 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 15:59:16 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "tests.h"

int	test_ft_lstadd_back()
{
	int	errors;

	errors = 0;
	ft_print_blue("[Testing ft_lstadd_back]\n");

	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = ft_lstnew((void*)"ABC");
	new = ft_lstnew((void*)"DEF");
	new2 = ft_lstnew((void*)"GHI");
	printf("TEST : lst.content = {ABC} / new.content = {DEF}  \n");
	ft_lstadd_back(&lst,new);
	ft_display_lst(lst);

	if (!strcmp((ft_lstlast(lst))->content, "DEF"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAILED]\n");
		errors++;
	}
	printf("TEST : add another node to the list\n");
	ft_lstadd_back(&lst,new2);
	ft_display_lst(lst);

	if (!strcmp((ft_lstlast(lst))->content, "GHI"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAILED]\n");
		errors++;
	}
	ft_free_lst(lst);

	printf("\nTEST : lst = NULL / new.content = {HELLO } \n");
	lst = NULL;
	new = ft_lstnew((void*)"HELLO");
	ft_lstadd_back(&lst,new);
	ft_display_lst(lst);

	if (!strcmp(lst->content, "HELLO"))
		ft_print_green("[OK]\n");
	else
	{
		ft_print_red("[FAILED]\n");
		errors++;
	}
	ft_free_lst(lst);

	printf("\nft_lstadd_back tested : %u errors found\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);
}
