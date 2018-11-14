/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:59:43 by bboucher          #+#    #+#             */
/*   Updated: 2018/11/12 12:13:46 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int	i;
	int	l;

	l = ft_strlen(s1);
	i = 0;
	while (s2[i])
		s1[l++] = s2[i++];
	s1[l] = '\0';
	return (s1);
}
