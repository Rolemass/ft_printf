/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 20:09:49 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:04:12 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char*)malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	while (i <= size + 1)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
