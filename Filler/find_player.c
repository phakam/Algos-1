/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 10:00:20 by mphaka            #+#    #+#             */
/*   Updated: 2017/12/14 10:00:22 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static int		move_right(t_info *info, t_piece *piece, int y, int x)
{
	int		i;
	int		j;

	i = piece->column - 1;
	while (i >= 0)
	{
		j = piece->row - 1;
		while (j >= 0)
		{
			if (piece->piece[i][j] == '*')
			{
				if (check_piece_ft(info, piece, x - j, y - i))
				{
					ft_putnbr(y - i);
					ft_putchar(' ');
					ft_putnbr(x - j);
					ft_putchar('\n');
					return (1);
				}
			}
			j--;
		}
		i--;
	}
	return (0);
}

static int		move_left(t_info *info, t_piece *piece, int y, int x)
{
	int		i;
	int		j;

	i = 0;
	while (i < piece->column)
	{
		j = 0;
		while (j < piece->row)
		{
			if (piece->piece[i][j] == '*')
			{
				if (check_piece_ft(info, piece, x - j, y - i))
				{
					ft_putnbr(y - i);
					ft_putchar(' ');
					ft_putnbr(x - j);
					ft_putchar('\n');
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

void			move_bottom(t_info *info, t_piece *piece)
{
	int		x;
	int		y;

	y = info->map_column - 1;
	while (y > 0)
	{
		x = info->map_row - 1;
		while (x > 0)
		{
			if (info->map[y][x] == info->letter)
			{
				if (move_left(info, piece, y, x) == 1)
				{
					return ;
				}
			}
			x--;
		}
		y--;
	}
	info->finish = 1;
}

void			place(t_info *info, t_piece *piece)
{
	int		y;
	int		x;

	y = 0;
	while (y < info->map_column)
	{
		x = 0;
		while (x < info->map_row)
		{
			if (info->map[y][x] == info->letter)
			{
				if (move_right(info, piece, y, x) == 1)
					return ;
			}
			x++;
		}
		y++;
	}
	info->count = 1;
}
