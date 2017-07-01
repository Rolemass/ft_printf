/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:26:40 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:22:04 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*list;

	list = *alst;
	if (!new || !alst)
		return ;
	if (list == NULL)
	{
		*alst = new;
		new->next = NULL;
		return ;
	}
	new->next = list;
	*alst = new;
}
