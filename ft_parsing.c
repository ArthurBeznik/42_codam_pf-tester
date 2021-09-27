/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parsing.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 17:34:00 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 18:06:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>
#include <stdarg.h>

int	ft_parsing(char *str)
{
	int	format;
	int	pos;

	format = 0;
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '%' && str[pos + 1] == 'c')
		{
			format = 1;
		}
		if (str[pos] == '%' && str[pos + 1] == 's')
		{
			format = 2;
		}
		*str++;
	}
	return (format);
}
