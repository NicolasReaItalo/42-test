/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:26:41 by nrea              #+#    #+#             */
/*   Updated: 2023/11/20 11:35:26 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	int	errors;
	ft_print_blue("##########################################\n");
	ft_print_blue("              BONUS PART\n");
	ft_print_blue("##########################################\n");
	errors = 0;
	errors += test_ft_lstnew();
	errors += test_ft_lstadd_front();
	errors += test_ft_lstsize();
	errors += test_ft_lstlast();
	errors += test_ft_lstadd_back();
	errors += test_ft_lstdelone();
	errors += test_ft_lstclear();
	errors += test_ft_lstiter();
	errors += test_ft_lstmap();
	if(errors)
		ft_print_red("\n\n\n[All tests done : Errors found !] \n");
	else
		ft_print_green("\n\n\n[All tests done : No errors found]\n");
	return 0;
}
