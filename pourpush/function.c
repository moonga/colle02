/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 19:27:08 by rhabib            #+#    #+#             */
/*   Updated: 2015/09/20 17:30:55 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		result;
	
	result = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' )
	{
		result = result + s1[i] - s2[i];
		if (result != 0)
			return (1);
		i++;
	}
	return (result);
}

void ft_putchar(char c)
{
write(1, &c, 1);
}

void	ft_putstr(char *str)
{
int i;

i = 0;
while(str[i] != '\0')
{
	ft_putchar(str[i]);
		i++;
}
}

void	ft_putnbr(int nbr)
{
	int		tmp;
	int		chiffre;
	int		size;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	tmp = nbr;
	size = 1;
	while (tmp / 10 > 0)
	{
		size = size * 10;
		tmp = tmp / 10;
	}
	while (size > 0)
	{
		chiffre = 0;
		chiffre = nbr / size;
		ft_putchar('0' + chiffre);
		nbr = nbr % size;
		size = size / 10;
	}
}

int ft_putresult(char *colle, int x, int y, int add)
{
	if (add == 1)
	{
		ft_putstr(" || ");
	}
ft_putstr(colle);
ft_putstr(" [");
ft_putnbr(x);
ft_putstr("] [");
ft_putnbr(y);
ft_putchar(']');
return (1);
}
