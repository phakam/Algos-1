/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 19:23:55 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/08 09:12:52 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temps;

	temps = (unsigned char*)s;
	while (0 < n)
	{
		if (*temps != (unsigned char)c)
		{
			temps++;
		}
		else
			return (temps);
		n--;
	}
	return (NULL);
}
