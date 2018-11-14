/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:18:36 by bboucher          #+#    #+#             */
/*   Updated: 2018/11/14 19:31:05 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	if (!(s && f))
		return (NULL);
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (*s)
	{
		map[i] = (*f)(*s);
		i++;
		s++;
	}
	return (map);
}
