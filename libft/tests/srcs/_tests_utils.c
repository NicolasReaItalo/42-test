/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _tests_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:18:05 by nrea              #+#    #+#             */
/*   Updated: 2023/11/15 12:16:07 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void ft_reset_col(void)
{
    printf("\033[0m");
}

void ft_print_green(char *s)
{
    printf("\033[1;32m");
    printf("%s",s);
    ft_reset_col();
}

void ft_print_red(char *s)
{
    printf("\033[1;31m");
    printf("%s",s);
    ft_reset_col();
}

void ft_print_blue(char *s)
{
    printf("\033[1;34m");
    printf("%s",s);
    ft_reset_col();
}


void	ft_display_int_arr(int *arr, int size)
{
	int i;

	i = 0;
	printf("[");
	while (i < size)
	{
		printf("%i",arr[i]);
		if (i == (size - 1))
			printf("]\n");
		else
			printf(",");
		i++;
	}

}

int ft_compare_int_array(int *arr1, int *arr2, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (arr1[i] != arr2[i])
			return (-1);
		i++;
	}
	return (0);
}


void	ft_display_char_arr(char *arr, int size)
{
	int i;

	i = 0;
	printf("[");
	while (i < size)
	{
		printf("%d",arr[i]);
		if (i == (size - 1))
			printf("]\n");
		else
			printf(",");
		i++;
	}

}

int ft_compare_char_array(char *arr1, char *arr2, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (arr1[i] != arr2[i])
			return (-1);
		i++;
	}
	return (0);
}

void ft_display_lst(t_list *lst)
{
	int node_nbr;

	if (!lst)
	{
		printf("list empty\n");
		return;
	}
	node_nbr = 1;
	while (lst)
	{
		printf("node : [%d] | content = [%s] | next addr = [%p]\n", node_nbr,(char *) lst->content, lst->next);
		node_nbr++;
		lst = lst->next;
	}
}


void ft_free_lst(t_list *begin_list)
{
	if(!begin_list)
		return;
	ft_free_lst(begin_list->next);
	free(begin_list);
	begin_list = NULL;
}

