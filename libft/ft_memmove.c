/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 22:53:44 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:00:28 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str;
	const char	*dst_bis;

	str = (char *)dst;
	dst_bis = (char *)src;
	if (dst_bis <= str)
	{
		str += len - 1;
		dst_bis += len - 1;
		while (len--)
		{
			*str-- = *dst_bis--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
