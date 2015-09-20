/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 12:00:39 by lpain             #+#    #+#             */
/*   Updated: 2015/09/20 15:48:14 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	colle(int x, int y);

int		col_atoi(char *str)
{
	int		val;
	int		neg;
	
	val = 0;
	neg = 0;
	if (*str == '-')
		neg = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			val = (val * 10) + (*str - '0');
		else
			break;
		str++;
	}
	return ((val > 0 && neg == 1 ? -val : val));
}
int		main(int argc, char **argv)
{
	if (argc == 3)
		colle(col_atoi(argv[1]), col_atoi(argv[2]));
	return (0);
}
