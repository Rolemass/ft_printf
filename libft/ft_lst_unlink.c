/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_unlink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:42:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:11:33 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_unlink(t_dlist *list)
{
	list->prev->next = list->next;
	list->next->prev = list->prev;
	list->next = NULL;
	list->prev = NULL;
}
