/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 09:59:32 by mphaka            #+#    #+#             */
/*   Updated: 2017/12/14 09:59:34 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define BUFF_SIZE 32
# include "../libft/libft.h"

typedef	struct	s_infor
{
	int			nbr;
	int			map_column;
	int			map_row;
	int			count;
	int			finish;
	char		letter;
	char		**map;
}				t_info;

typedef	struct	s_piece
{
	int			column;
	int			row;
	int			x;
	int			y;
	char		**piece;
}				t_piece;

void			move_bottom(t_info *info, t_piece *piece);
void			place(t_info *info, t_piece *piece);
void			get_info(t_info *info);
void			get_map(t_info *info, t_piece *piece);
int				check_piece_ft(t_info *info, t_piece *piece, int x, int y);
int				player(t_info *info, t_piece *piece);
int				get_next_line(const int fd, char **line);

#endif
