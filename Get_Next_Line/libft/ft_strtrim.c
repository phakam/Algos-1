/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 01:25:43 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/20 13:07:29 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		begin;
	size_t	end;
	size_t		i;
	char	*str;

	if (!s)
		return (NULL);begin = 0;
	end = ft_strlen((char*)s) - 1;
	while (begin < ft_strlen(s) && ft_isspace(s[begin]))
		begin++;
	while (end > begin && ft_isspace(s[end]))
		end--;
	i = end - begin + 1;
	str = ft_strsub(s, begin, i);
	return (str);
}
