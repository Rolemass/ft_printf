/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:54:23 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:51:50 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	if (str1[i] == '\0' && str2[i] == '\0')
		return (1);
	return (0);
}
