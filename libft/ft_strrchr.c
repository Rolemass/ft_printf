/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:25:37 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:19:47 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	i;
	char	car;

	i = ft_strlen(str);
	car = (char)c;
	while (i > 0)
	{
		if (str[i] == car)
			return ((char*)str + i);
		i--;
	}
	if (str[i] == car)
		return ((char*)str + i);
	return (NULL);
}
