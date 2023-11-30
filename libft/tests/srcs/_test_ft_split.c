/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _test_ft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:30:24 by nrea              #+#    #+#             */
/*   Updated: 2023/11/17 19:16:28 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_display_splitted(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		printf("splitted[%i] -> [%s]\n", i, s[i]);
		i++;
	}
	printf("splitted[%i] -> [%s]\n", i, s[i]);
	printf("\n");
}

int	ft_cmp_splitted(char **s, char **ref)
{
	int	i;

	i = 0;
	while (s[i] != NULL && ref[i] != NULL)
	{
		if (ft_strncmp(s[i], ref[i], ft_strlen(ref[i])) != 0)
			return (0);
		i++;
	}
	if (ref[i] != NULL || s[i] != NULL)
		return (0);
	return (1);
}

void	ft_free_splitted(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	test_ft_split(void)
{
	int		errors;
	char 	*src_tst1 = "***ABCD*EFGH***IJKLMNO*PQRSTUV***********WXYZ*";
	char 	*src_tst2 = "**ABCD";
	char 	*src_tst3 = "";
	char	**splitted1;
	char	**splitted2;
	char	**splitted3;
	char	*ref_tst1[] = {"ABCD","EFGH","IJKLMNO","PQRSTUV","WXYZ",NULL};
	char	*ref_tst2[] = {"ABCD",NULL};
	char	*ref_tst3[] = {NULL};



	errors = 0;
	ft_print_blue("[Testing ft_split]\n");

	printf("\n [TEST 1]\n");
	printf(" Source    : [%s]\n",src_tst1);
	printf(" Separator : [%c]\n",'*');
	splitted1 = ft_split(src_tst1,'*');
	ft_display_splitted(splitted1);

	if (ft_cmp_splitted(splitted1, ref_tst1))
		ft_print_green("TEST 1 OK\n");
	else
	{
		ft_print_red("TEST 1 FAILED\n");
		errors++;
	}


	printf("\n [TEST 2]\n");
	printf(" Source    : [%s]\n",src_tst2);
	printf(" Separator : [%c]\n",'*');
	splitted2 = ft_split(src_tst2,'*');
	ft_display_splitted(splitted2);

	if (ft_cmp_splitted(splitted2, ref_tst2))
		ft_print_green("TEST 2 OK\n");
	else
	{
		ft_print_red("TEST 2 FAILED\n");
		errors++;
	}


	printf("\n [TEST 3]\n");
	printf(" Source    : [%s]\n",src_tst3);
	printf(" Separator : [%c]\n",'*');
	splitted3 = ft_split(src_tst3,'*');
	ft_display_splitted(splitted3);

	if (ft_cmp_splitted(splitted3, ref_tst3))
		ft_print_green("TEST 3 OK\n");
	else
	{
		ft_print_red("TEST 3 FAILED\n");
		errors++;
	}

	ft_free_splitted(splitted1);
	ft_free_splitted(splitted2);
	ft_free_splitted(splitted3);



	    printf("ft_split tested -> [%d] errors found\n\n\n", errors);
	ft_print_blue("______________________________________________________\n\n");
	return (errors);

}
