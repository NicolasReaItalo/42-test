/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:42:14 by nrea              #+#    #+#             */
/*   Updated: 2023/11/28 10:45:57 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
#include <stdlib.h>
# include "ft_printf.h"
# include <limits.h>
int main()
{

	int c, c2;

// int c
	//  c = ft_printf("[%c|%c|%c]",INT_MIN, 65, UCHAR_MAX);
	//  printf("\nft_printf : [%d]\n",c);
	//  c2 = printf("[%c|%c|%c]",INT_MIN, 65, UCHAR_MAX);
	//  printf("\n   printf : [%d]",c2);


// int i
	//  c = ft_printf("[%i|%i|%i]",INT_MIN, 0, INT_MAX);
	//  printf("\nft_printf : [%d]\n",c);
	//  c2 = printf("[%i|%i|%i]",INT_MIN, 0, INT_MAX);
	//  printf("\n   printf : [%d]",c2);

// int  %d
	//  c = ft_printf("[%d|%d|%d]",INT_MIN, 0, INT_MAX);
	//  printf("\nft_printf : [%d]\n",c);
	//  c2 = printf("[%d|%d|%d]",INT_MIN, 0, INT_MAX);
	//  printf("\n   printf : [%d]",c2);

// chaines de caracteres %s
	// c = ft_printf("[%s|%s|%s]","The quick brown fox jumped over the lazy dog", "", (char *)NULL);
	// printf("\nft_printf : [%d]\n",c);
	// c2 = printf("[%s|%s|%s]","The quick brown fox jumped over the lazy dog", "", (char *)NULL);
	// printf("\n   printf : [%d]",c2);

// Unsigned int %u
	//  c = ft_printf("[%u|%u|%u]",UINT_MAX, 0, -5);
	//  printf("\nft_printf : [%d]\n",c);
	//  c2 = printf("[%u|%u|%u]",UINT_MAX, 0, -5);
	//  printf("\n   printf : [%d]",c2);

//  Chaine classique
	//  c = ft_printf("[The quick brown fox jumped over the lazy dog]");
	//  printf("<-\n[%d]\n",c);
	//  c2 = printf("[The quick brown fox jumped over the lazy dog]");
	//  printf("<-\n[%d]",c2);

	//  Chaine vide
	//  c = ft_printf("");
	//  printf("\nft_printf : [%d]\n",c);
	//  c2 = printf("");
	//  printf("\n   printf : [%d]",c2);

	//  Chaine NULL  - utiliser -noflags
	//  c = ft_printf((char *)NULL);
	//  printf("<-\n[%d]\n",c);
	//  c2 = printf((char *)NULL);
	//  printf("<-\n[%d]",c2);


// u_int avec  %X
	// c = ft_printf("%X", 0xfabcd123);
	// printf("\n[%d]\n", c);

	// c2 = printf("%X", 0xfabcd123);
	// printf("\n[%d]\n", c2);

// u_int avec  %x
	// c = ft_printf("%x", 0xfabcd123);
	// printf("\n[%d]\n", c);

	// c2 = printf("%x", 0xfabcd123);
	// printf("\n[%d]\n", c2);


// // Pointeurs
		// void *p = malloc(1570);
		// c = ft_printf("%p", p);
		// printf("\n[%d]\n", c);

		// c2 = printf("%p", p);
		// printf("\n[%d]\n", c2);

		// free(p);

// pointeur NULL

	// void *p = NULL;
	// c = ft_printf("%p", p);
	// printf("\n[%d]\n", c);

	// c2 = printf("%p", p);
	// printf("\n[%d]\n", c2);
	// return 0;

// Jeux de  Pointeurs et max size p
	// void *p = malloc(1570);
	// c = ft_printf("%p", p + 0xFFFFFFFFFFFFFFF);
	// printf("\n[%d]\n", c);

	// c2 = printf("%p", p + 0xFFFFFFFFFFFFFFF);
	// printf("\n[%d]\n", c2);


	// free(p);

	//  printf("%#lx", ULONG_MAX);


// Tout a la suite
	// int a = 25;
	// char *s = "ABCDEF";
	// void *p = &a;
	// unsigned int u = UINT_MAX;
	// 	c = ft_printf("%i%i%d%d%p%p%u%x%X%s%s", a, a , a, a, p, &a, u, u, u, s, s);
	// 	printf("\n[%d]\n", c);
	// 	c2 = printf("%i%i%d%d%p%p%u%x%X%s%s", a, a , a, a, p, &a, u, u, u, s, s);
	// 	printf("\n[%d]\n", c2);

// caractere d'echappement
		// c = ft_printf("a\tb");
		// printf("\n[%d]\n", c);
		// c2 = printf("a\tb");
		// printf("\n[%d]\n", c2);


// Cas %%
	// c = ft_printf("[%%%%]");
	// printf("\n[%d]\n", c);

	// c2 = printf("[%%%%]");
	// printf("\n[%d]\n", c2);



/// TRUCS TORDUS
	// c = ft_printf("%%%");
	// printf("\n[%d]\n", c);

	// char *s = "%%%";
	// c2 = printf(s);
	// printf("\n[%d]\n", c2);

// % suivi d'un caractere non codant ( pour printf et ft_printf) -noflags
	// c = ft_printf("%())");
	// printf("\n[%d]\n", c);

	// c2 = printf("%())");
	// printf("\n[%d]\n", c2);

// //  Chaine mal formatee avec % en fin de chaine  - utiliser -noflags
	// char *s = "Hello les amis%";
	//  c = ft_printf(s);
	//  printf("<-\n[%d]\n",c);
	//  c2 = printf(s);
	//  printf("<-\n[%d]",c2);




}




/*
		TO DO

		[]norminette

		[OK]tester %p avec NULL ! OK
		[]faire le git une fois le projet ouvert
		[]tester Tripouille
		[]tester francinette
		[]tester paulo-santana ft_printf_tester
		[]voir pour les fonctions dans la lib
		[]checker nom de la lib
		[]voir signe parametre ft_putchar


0x1000000000ac329f$
0x1000000000ac329f$
0xffffffffffffffff%

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign

*/
