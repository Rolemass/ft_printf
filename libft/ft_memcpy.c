/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 19:47:07 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:50:17 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dst;
	const unsigned char		*sc;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (const unsigned char *)src;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dst);
}
