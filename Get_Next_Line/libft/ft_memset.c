/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 14:04:36 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/06 21:58:21 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	tempc;

	i = 0;
	temp = b;
	tempc = (unsigned char)c;
	while (len--)
	{
		*temp++ = tempc;
	}
	return (b);
}
