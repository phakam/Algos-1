/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 09:59:05 by mphaka            #+#    #+#             */
/*   Updated: 2017/12/14 09:59:07 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static void		init(t_info *info, t_piece *piece)
{
	info->nbr = 0;
	info->count = 0;
	info->finish = 0;
	piece->column = 0;
	piece->row = 0;
}

int				main(void)
{
	t_info		info;
	t_piece		piece;

	init(&info, &piece);
	get_info(&info);
	while (1)
	{
		if (info.nbr == 1 || info.nbr == 2)
		{
			if (player(&info, &piece) == 0)
			{
				break ;
			}
		}
	}
}
