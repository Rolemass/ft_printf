/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:45:43 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:11:20 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_replace(t_dlist *to_link, t_dlist *to_replace)
{
	if (!to_link || !to_replace || !to_replace->next || !to_replace->prev)
		return ;
	to_replace->prev->next = to_link;
	to_replace->next->prev = to_link;
	to_link->next = to_replace->next;
	to_link->prev = to_replace->prev;
}
