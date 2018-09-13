/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 05:39:54 by mphaka            #+#    #+#             */
/*   Updated: 2017/06/20 12:48:49 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	ft_putnum(unsigned int n)
{
	if (n >= 10)
		ft_putnum(n / 10);
	ft_putchar((n % 10) + '0');
}

void		ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	ft_putnum((ABS(n)));
}
