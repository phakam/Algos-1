/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:16:36 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/10 04:26:51 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*temp1;
	size_t	i;

	i = 0;
	temp1 = (char*)big;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (*temp1 && little[i] != '\0' && i < len)
	{
		if (*temp1 != little[i])
			i = 0;
		else
			i++;
		temp1++;
	}
	if (i == ft_strlen(little))
	{
		while (i--)
		{
			temp1--;
		}
		return (temp1);
	}
	return (NULL);
}
