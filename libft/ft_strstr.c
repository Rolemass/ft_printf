/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:51:21 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:04:41 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k++] == to_find[j++])
			{
				if (to_find[j] == '\0')
					return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}
