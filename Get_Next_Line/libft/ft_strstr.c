/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 10:50:25 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/11 13:04:16 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int j;
	int	k;

	i = 0;
	if (*little == '\0' && *big == '\0')
		return ((char*)big);
	while (big[i])
	{
		j = i;
		k = 0;
		if (little[k] == '\0')
		{
			return ((char*)(&big[i]));
		}
		while (big[j] && little[k] && big[j] == little[k])
		{
			j++;
			k++;
			if (little[k] == '\0')
				return ((char*)(&big[i]));
		}
		i++;
	}
	return (0);
}
