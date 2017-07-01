/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:02:36 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 19:59:52 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uch;

	i = 0;
	str = (unsigned char*)s;
	uch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == uch)
			return (str + i);
		i++;
	}
	return (NULL);
}
