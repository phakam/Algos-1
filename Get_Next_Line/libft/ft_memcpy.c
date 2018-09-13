/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:27:33 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/08 08:27:30 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempd;
	unsigned char	*temps;

	i = 0;
	tempd = dst;
	temps = (unsigned char*)src;
	while (0 < n)
	{
		tempd[i] = temps[i];
		i++;
		n--;
	}
	return (dst);
}
