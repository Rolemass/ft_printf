/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:58:45 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:15:45 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_str_lst(t_dlist *head)
{
	t_dlist *list;

	if (!head || !head->next || !head->prev)
		return ;
	list = head->next;
	while (list != head)
	{
		ft_putendl((char*)list->content);
		list = list->next;
	}
}
