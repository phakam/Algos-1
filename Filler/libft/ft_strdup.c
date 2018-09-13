/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:36:10 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:20:35 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		counter1;
	int		len;

	len = ft_strlen(str1);
	counter1 = 0;
	if (!(str2 = (char *)malloc(sizeof(*str1) * (len + 1))))
		return (NULL);
	while (counter1 < len)
	{
		str2[counter1] = str1[counter1];
		counter1++;
	}
	str2[counter1] = '\0';
	return (str2);
}
