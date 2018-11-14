/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:36:16 by bboucher          #+#    #+#             */
/*   Updated: 2018/11/14 19:23:10 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numberofdigits(int n)
{
	int	res;

	res = 0;
	while (n / 10)
	{
		n /= 10;
		res++;
	}
	return (res + 1);
}

char		*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		size;

	nb = n;
	size = ft_numberofdigits(n);
	if (nb < 0)
		size++;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	size--;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb >= 10)
	{
		str[size] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	str[size] = nb + '0';
	return (str);
}
