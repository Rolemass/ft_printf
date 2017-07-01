/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 20:04:20 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:15:32 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k++] == to_find[j++] && k <= len)
			{
				if (to_find[j] == '\0')
					return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}
