/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:51:13 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:50:27 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	unsigned char		*sc;
	unsigned char		car;

	dst = (unsigned char*)dest;
	sc = (unsigned char*)src;
	car = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst[i] = sc[i];
		if (sc[i] == car)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
