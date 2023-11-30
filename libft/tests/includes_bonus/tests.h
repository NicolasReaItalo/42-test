/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:07:16 by nrea              #+#    #+#             */
/*   Updated: 2023/11/15 16:25:30 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H


#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"
#include "limits.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

//utils
void	ft_reset_col(void);
void	ft_print_green(char *s);
void	ft_print_red(char *s);
void	ft_print_blue(char *s);
void	ft_display_int_arr(int *arr, int size);
int		ft_compare_int_array(int *arr1, int *arr2, int size);
void	ft_display_char_arr(char *arr, int size);
int		ft_compare_char_array(char *arr1, char *arr2, int size);
void	ft_display_lst(t_list *lst);
void	ft_free_lst( t_list *lst);
//tests
int		test_ft_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);
int		test_ft_strlen(void);
int		test_ft_memset(void);
int		test_ft_bzero(void);
int		test_ft_memcpy(void);
int		test_ft_memmove(void);
int		test_ft_strlcpy(void);
int		test_ft_strlcat(void);
int		test_ft_toupper(void);
int		test_ft_tolower(void);
int		test_ft_strchr(void);
int		test_ft_strrchr(void);
int		test_ft_strncmp(void);
int		test_ft_memchr(void);
int		test_ft_memcmp(void);
int		test_ft_strnstr(void);
int		test_ft_atoi(void);
int		test_ft_calloc(void);
int		test_ft_strdup(void);
int		test_ft_substr(void);
int		test_ft_strjoin(void);
int		test_ft_strtrim(void);
int		test_ft_split(void);
int		test_ft_itoa(void);
int		test_ft_strmapi(void);
int		test_ft_striteri(void);
int		test_ft_putchar_fd(void);
int		test_ft_putstr_fd(void);
int		test_ft_putendl_fd(void);
int		test_ft_putnbr_fd(void);

int		test_ft_lstnew();
int		test_ft_lstadd_front();
int		test_ft_lstsize();
int		test_ft_lstlast();
int		test_ft_lstadd_back();
int		test_ft_lstdelone();
int		test_ft_lstclear();
int		test_ft_lstiter();
int		test_ft_lstmap();

#endif
