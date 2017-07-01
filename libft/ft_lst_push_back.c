/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:42:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:12:50 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(t_dlist *to_push_back, t_dlist *head)
{
	if (!to_push_back || !head)
		return ;
	head->prev->next = to_push_back;
	to_push_back->prev = head->prev;
	to_push_back->next = head;
	head->prev = to_push_back;
}
