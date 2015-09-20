/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectcolle.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 19:43:40 by rhabib            #+#    #+#             */
/*   Updated: 2015/09/20 17:26:41 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECTCOLLE
# define DETECTCOLLE

int		detectcolle(char *str, int x, int y, int colnum, int midchar, int lastchar);
int	ft_colle04(int x, int y, int i, int j, char *str, int midchar, int lastchar);
int    ft_colle03(int x, int y, int i, int j, char *str, int midchar, int lastchar);
int    ft_colle02(int x, int y, int i, int j, char *str, int midchar, int lastchar);
int    ft_colle01(int x, int y, int i, int j, char *str, int midchar, int lastchar);
int    ft_colle00(int x, int y, int i, int j, char *str, int midchar, int lastchar);
//}

#endif
