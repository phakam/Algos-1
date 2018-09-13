/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 10:00:30 by mphaka            #+#    #+#             */
/*   Updated: 2017/12/14 10:00:33 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static	int		check_size(t_info *info, t_piece *piece, int x, int y)
{
	if (x > info->map_row || x < 0)
		return (0);
	if (y > info->map_column || y < 0)
		return (0);
	if (x + piece->row > info->map_row)
		return (0);
	if (y + piece->column > info->map_column)
		return (0);
	return (1);
}

static	int		check_position(t_info *info, t_piece *piece, int x, int y)
{
	int		i;
	int		j;
	int		temp;
	int		counter;

	i = -1;
	temp = x;
	counter = 0;
	while (++i < piece->column)
	{
		j = -1;
		x = temp;
		while (++j < piece->row)
		{
			if (info->nbr == 1)
				if (piece->piece[i][j] == '*' && info->map[y][x] == 'O')
					counter++;
			if (info->nbr == 2)
				if (piece->piece[i][j] == '*' && info->map[y][x] == 'X')
					counter++;
			x++;
		}
		y++;
	}
	return (counter > 1) ? 0 : 1;
}

static	int		check_other_pos(t_info *info, t_piece *piece, int x, int y)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	temp = x;
	while (i < piece->column)
	{
		j = 0;
		x = temp;
		while (j < piece->row)
		{
			if (info->nbr == 1)
				if (piece->piece[i][j] == '*' && info->map[y][x] == 'X')
					return (0);
			if (info->nbr == 2)
				if (piece->piece[i][j] == '*' && info->map[y][x] == 'O')
					return (0);
			x++;
			j++;
		}
		y++;
		i++;
	}
	return (1);
}

int				check_piece_ft(t_info *info, t_piece *piece, int x, int y)
{
	if (check_size(info, piece, x, y) == 0)
		return (0);
	if (check_position(info, piece, x, y) == 0)
		return (0);
	if (check_other_pos(info, piece, x, y) == 0)
		return (0);
	return (1);
}
