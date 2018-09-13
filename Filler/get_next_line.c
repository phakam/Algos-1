/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 10:49:25 by mphaka            #+#    #+#             */
/*   Updated: 2017/12/14 10:49:27 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static int	ft_cpy_contents(int const fd, char **container)
{
	char	*buff;
	char	*temp;
	int		value;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	value = read(fd, buff, BUFF_SIZE);
	if (value > 0)
	{
		buff[value] = '\0';
		temp = ft_strjoin(*container, buff);
		free(*container);
		*container = temp;
	}
	free(buff);
	return (value);
}

int			get_next_line(const int fd, char **line)
{
	static char	*hold = NULL;
	char		*line_feed;
	int			value;

	if ((!hold && (hold = (char *)malloc(sizeof(*hold))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	line_feed = ft_strchr(hold, '\n');
	while (line_feed == NULL)
	{
		value = ft_cpy_contents(fd, &hold);
		if (value == 0)
		{
			if (ft_strlen(hold) == 0)
				return (0);
			hold = ft_strjoin(hold, "\n");
		}
		if (value < 0)
			return (-1);
		else
			line_feed = ft_strchr(hold, '\n');
	}
	*line = ft_strsub(hold, 0, ft_strlen(hold) - ft_strlen(line_feed));
	hold = ft_strdup(line_feed + 1);
	return (1);
}
