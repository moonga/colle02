/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectcolle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 12:41:31 by rhabib            #+#    #+#             */
/*   Updated: 2015/09/20 17:47:38 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "detectcolle.h"
#include <unistd.h>

void ft_puchar(char c);
void ft_puchar(char c)
{
	write(1, &c, 1);
}

int detectcolle(char *str, int x, int y, int colnum, int midchar, int lastchar)
{
	int i;
	int ii;
	int j;
	int test;

	i = 1;
	j = 1;
	test = 1;
	ii = 0;
	while (i <= y)
	{
		while (j <= x)
		{
			if (colnum == 0 && test == 1)
				test = ft_colle00(x, y, i, j, str, midchar, lastchar);
			if (colnum == 1 && test == 1)
				test = ft_colle01(x, y, i, j, str, midchar, lastchar);
			if (colnum == 2 && test == 1)
				test = ft_colle02(x, y, i, j, str, midchar, lastchar);
			if (colnum == 3 && test == 1)
				test = ft_colle03(x, y, i, j, str, midchar, lastchar);
			if (colnum == 4 && test == 1)
				test = ft_colle04(x, y, i, j, str, midchar, lastchar);
			j++;
		}
		j = 1;
		i++;
	}
	return(test);
}

int ft_colle04(int x, int y, int i, int j, char *str, int midchar, int lastchar)
{
	int test;
	char mem;

	test = 1;
	if (i == 1 && j == 1)
	{
		mem = 'A';
		if (str[0] != mem)
			test = 0;
	}
	else if (j == x && i == 1)
	{
		mem = 'C';
		if (str[midchar] != mem)
			test = 0;
	}
	else if (j == 1 && i == y)
	{
		mem = 'C';
		if (str[lastchar - x + 1] != mem)
			test = 0;
	}
	else if (j == x && i == y)
	{
		mem = 'A';
		if (str[lastchar] != mem)
			test = 0;
	}

	return(test);
}

int ft_colle03(int x, int y, int i, int j, char *str, int midchar, int lastchar)
{
	char mem;
	int test;

	test = 1;
	if (i == 1 && j == 1)
	{
		mem = 'A';
		if (str[0] != mem)
			test = 0;
	}
	else if (j == x && i == 1)
	{
		mem = 'C';
		if (str[midchar] != mem)
			test = 0;
	}
	else if (j == 1 && i == y)
	{
		mem = 'A';
		if (str[lastchar - x + 1] != mem)
			test = 0;
	}
	else if (j == x && i == y)
	{
		mem = 'C';
		if (str[lastchar] != mem)
			test = 0;
	}

	return(test);
}

int ft_colle02(int x, int y, int i, int j, char *str, int midchar, int lastchar)
{
	char mem;
	int test;

	test = 1;
	if (i == 1 && j == 1)
	{
		mem = 'A';
		if (str[0] != mem)
			test = 0;
	}
	else if (j == x && i == 1)
	{
		mem = 'A';
		if (str[midchar] != mem)
			test = 0;
	}
	else if (j == 1 && i == y)
	{
		mem = 'C';
		if (str[lastchar - x + 1] != mem)
			test = 0;
	}
	else if (j == x && i == y)
	{
		mem = 'C';
		if (str[lastchar] != mem)
			test = 0;
	}

	return(test);
}

int ft_colle01(int x, int y, int i, int j, char *str, int midchar, int lastchar)
{
	char mem;
	int test;

	test = 1;
	if (i == 1 && j == 1)
	{
		mem = '/';
		if (str[0] != mem)
			test = 0;
	}
	else if (j == x && i == 1)
	{
		mem = '\\';
		if (str[midchar] != mem)
			test = 0;
	}
	else if (j == 1 && i == y)
	{
		mem = '\\';
		if (str[lastchar - x + 1] != mem)
			test = 0;
	}
	else if (j == x && i == y)
	{
		mem = '/';
		if (str[lastchar] != mem)
			test = 0;
	}

	return(test);
}

int ft_colle00(int x, int y, int i, int j, char *str, int midchar, int lastchar)
{
	char mem;
	int test;

	test = 1;
	if (i == 1 && j == 1)
	{
		mem = 'o';
		if (str[0] != mem)
			test = 0;
	}
	else if (j == x && i == 1)
	{
		mem = 'o';
		if (str[midchar] != mem)
			test = 0;
	}
	else if (j == 1 && i == y)
	{
		mem = 'o';
		if (str[lastchar - x + 1] != mem)
			test = 0;
	}
	else if (j == x && i == y)
	{
		mem = 'o';
		if (str[lastchar] != mem)
			test = 0;
	}
	return (test);
}

