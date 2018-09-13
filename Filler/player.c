/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 09:59:18 by mphaka            #+#    #+#             */
/*   Updated: 2017/12/14 09:59:21 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static int		check_column(t_info *info, int x)
{
	int		y;

	y = 0;
	while (y < info->map_column)
	{
		if (info->map[y][x] == info->letter)
			return (1);
		y++;
	}
	return (0);
}

int				player(t_info *info, t_piece *piece)
{
	get_map(info, piece);
	if (check_column(info, 0) == 0)
		place(info, piece);
	else
		move_bottom(info, piece);
	if (info->count == 1)
		move_bottom(info, piece);
	if (info->finish == 1)
	{
		ft_putnbr(0);
		ft_putchar(' ');
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
