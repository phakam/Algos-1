/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:26:46 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/08 09:17:23 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i != 0 && s[i] != (unsigned char)c)
	{
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char*)s + i);
	return (0);
}
