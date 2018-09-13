/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 15:31:25 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/10 02:25:09 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(*dest) * size + 1)))
	{
		return (NULL);
	}
	ft_memset(dest, '\0', size + 1);
	return (dest);
}
