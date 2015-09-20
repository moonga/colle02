/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 17:41:59 by rhabib            #+#    #+#             */
/*   Updated: 2015/09/20 17:45:09 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "function.h"
#include "detectcolle.h"
#define BUF_SIZE 1

void fonctioncol(char *buf, int x, int y, int midchar, int lastchar)
{
	int num;
	int add;
	add = 0;
	if (x <= 0 || y <=0)
		ft_putstr("aucune");
	else
	{
		num = detectcolle(buf, x, y, 0, midchar, lastchar);
		if (num)
			add = ft_putresult("[colle-00]", x, y, add);
		num = detectcolle(buf, x, y, 1, midchar, lastchar);
		if (num)
			add = ft_putresult("[colle-01]", x, y, add);
		num = detectcolle(buf, x, y, 2, midchar, lastchar);
		if (num)
			add = ft_putresult("[colle-02]", x, y, add);
		num = detectcolle(buf, x, y, 3, midchar, lastchar);
		if (num)
			add = ft_putresult("[colle-03]", x, y, add);
		num = detectcolle(buf, x, y, 4, midchar, lastchar);
		if (num)
			add = ft_putresult("[colle-04]", x, y, add);
		if (add == 0)
			ft_putstr("aucune");
	}
	ft_putchar('\n');
}

int main(void)
{
	char	*mem;
	char	buf[BUF_SIZE +1];  //1024 =  buffsize
	int		ret;	
	int i;
	int x;
	int y;
	int midchar;
	int lastchar;

	i = 0;
	x = 0;
	y = 0;
	mem = (char*)malloc(BUF_SIZE);
	while ((ret = read(0, buf,BUF_SIZE))) //1025 = buffsize
	{
		if (buf[0] == '\n')
		{
			//ft_putchar(mem[i]);
			if (y == 0)
				midchar = i - 1;
			y++;
		}
		if (buf[0] != '\n')
			x++;
		buf[ret] = '\0';
		mem[i] = buf[0];
		i++;
	}
	mem[i] = '\0';
	lastchar = i - 2; 
	if (y != 0)
		x = x / y;
	//ft_colle(5,5,0);
	fonctioncol(mem, x, y, midchar, lastchar);
	return(0);									
}

