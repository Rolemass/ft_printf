/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:18:03 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:02:09 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	car;

	i = 0;
	car = (char)c;
	while (str[i])
	{
		if (str[i] == c)
			return ((char*)(str + i));
		i++;
	}
	if (str[i] == c)
		return ((char*)(str + i));
	return (NULL);
}
