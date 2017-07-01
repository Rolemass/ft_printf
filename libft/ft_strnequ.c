/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 19:55:22 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:52:18 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (!s1 || !s2)
		return (0);
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	if ((str1[i] == '\0' && str2[i] == '\0') || i == n)
		return (1);
	return (0);
}
