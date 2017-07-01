/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:42:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:14:40 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_create_elem(void *content)
{
	t_dlist	*new;

	new = (t_dlist*)malloc(sizeof(t_dlist));
	if (!new)
		return (NULL);
	if (content == NULL)
		new->content = NULL;
	else
	{
		new->content = (void*)malloc(sizeof(content));
		if (new->content == NULL)
			return (NULL);
		ft_memcpy(new->content, content, sizeof(content));
	}
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
