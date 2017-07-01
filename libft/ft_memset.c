/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:52:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:50:56 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	char				*str;
	unsigned char		a;

	i = 0;
	str = (char*)s;
	a = (unsigned char)c;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
