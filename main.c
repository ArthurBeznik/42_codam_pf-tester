/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 12:32:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 16:23:49 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>

int	main(void)
{
	int		count;
	int		d;
	char	c;
	char	*s;
	int		x;
	int     i;
	void	*p;

	c = 'x';
	s = "croissant";
	p = &s;
	d = -1;
	x = -12;
	i = 42424242424242;

	/* c WORKING */
	// ft_printf("coucou %c\n", c);
	// printf("\texpected:\n");
	// printf("coucou %c\n", c);
	// printf("\n");
	// ft_printf("coucou %c salut\n", c);
	// printf("\texpected:\n");
	// printf("coucou %c salut\n", c);

	/* s WORKING */
	// ft_printf("coucou %s salut\n", s);
	// printf("\texpected:\n");
	// printf("coucou %s salut\n", s);
	// printf("\n");
	// ft_printf("coucou %s salut %s\n", s, s);
	// printf("\texpected:\n");
	// printf("coucou %s salut %s\n", s, s);

	/* d WORKING */
	// ft_printf("bonjour %d baguette svp\n", d);
	// printf("\texpected:\n");
	// printf("bonjour %d baguette svp\n", d);

	/* x WORKING */
	// ft_printf("%d in lowercase hex is %x\n", x, x);
	// printf("\texpected: \n");
	// printf("%d in lowercase hex is %x\n", x, x);
	
	/* X WORKING */
	// ft_printf("%d in uppercase hex is %X\n", x, x);
	// printf("\texpected: \n");
	// printf("%d in uppercase hex is %X\n", x, x);
	
	/* i WORKING */ 
	ft_printf("i: %i\n", i);
	printf("\texpected: \n");
	printf("i: %i\n", i);

	/* u WORKING */
	// ft_printf("int %d: %u\n", i, i);
	// printf("\texpected: \n");
	// printf("int %d: %u\n", i, i);
	
	/* % WORKING */
	// ft_printf("%%\n");
	// printf("\texpected: \n");
	// printf("%%\n");
	
	/* p WORKING */
	// ft_printf("bonjour %p merci\n", p);
	// printf("\texpected:\n");
	// printf("bonjour %p merci\n", p);

	/* intensive test */
	// ft_printf("%% bonjour %c baguette du %s oui %i oui %d merci %x svp %X aurevoir %u\n", c, s, i, d, x, x, i);
	// printf("\texpected: \n");
	// printf("%% bonjour %c baguette du %s oui %i oui %d merci %x svp %X aurevoir %u\n", c, s, i, d, x, x, i);

	return (0);
}
