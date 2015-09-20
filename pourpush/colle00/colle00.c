/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 13:29:07 by lpain             #+#    #+#             */
/*   Updated: 2015/09/20 17:12:26 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_square(int x, int y, int i, int j)
{
	if (j == 1 && (i == 1 || i == y))
		ft_putchar('o');
	else if (j > 1 && j < x && (i == 1 || i == y))
		ft_putchar('-');
	else if (j == x && (i == 1 || i == y))
		ft_putchar('o');
	else if (i > 1 && i < y && !(j > 1 && j < x))
		ft_putchar('|');
	else if (i > 1 && i < y && (j > 1 || j < x))
		ft_putchar(' ');
	if (j == x)
		ft_putchar('\n');
}
void	colle(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_draw_square(x, y, i, j);
			j++;
		}
		j = 1;
		i++;
	}
}
