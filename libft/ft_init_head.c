/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_head.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:42:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:14:33 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_init_head(void *content)
{
	t_dlist	*head;

	head = (t_dlist*)malloc(sizeof(t_dlist));
	if (!head)
		return (NULL);
	if (content == NULL)
		head->content = NULL;
	else
	{
		head->content = (void*)malloc(sizeof(content));
		if (head->content == NULL)
			return (NULL);
		ft_memcpy(head->content, content, sizeof(content));
	}
	head->next = head;
	head->prev = head;
	return (head);
}
