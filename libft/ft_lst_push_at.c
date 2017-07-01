/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_at.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:42:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:15:32 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lst_push_behind_at(t_dlist *head, t_dlist *to_push, int at)
{
	int		i;
	t_dlist	*lst;

	i = -1;
	lst = head->prev;
	while (lst->prev != head && i > at)
	{
		lst = lst->prev;
		i--;
	}
	ft_lst_link_with(to_push, lst);
}

static void	ft_lst_push_front_at(t_dlist *head, t_dlist *to_push, int at)
{
	int		i;
	t_dlist	*lst;

	i = 1;
	lst = head->next;
	while (lst->next != head && i < at)
	{
		lst = lst->next;
		i++;
	}
	ft_lst_link_with(to_push, lst);
}

void		ft_lst_push_at(t_dlist *head, t_dlist *to_push, int at)
{
	if (at == 0 || !head || !to_push)
		return ;
	if (at < 0)
	{
		if (-at >= (int)ft_lst_len(head))
			ft_lst_push_front(to_push, head);
		else
			ft_lst_push_behind_at(head, to_push, at);
	}
	if (at > 0)
	{
		if (at >= (int)ft_lst_len(head))
			ft_lst_push_back(to_push, head);
		else
			ft_lst_push_front_at(head, to_push, at);
	}
}
