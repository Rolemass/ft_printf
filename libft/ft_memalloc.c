/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 22:25:36 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 19:59:32 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = NULL;
	if ((mem = (char*)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (i < size)
	{
		mem[i] = '\0';
		i++;
	}
	mem[i] = '\0';
	return ((void*)mem);
}
