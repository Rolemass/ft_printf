/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_replace_at.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:42:08 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:11:27 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_push_behind_at(t_dlist *head, t_dlist *to_push, int at)
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
	ft_lst_replace(to_push, lst);
}

static void	ft_push_front_at(t_dlist *head, t_dlist *to_push, int at)
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
	ft_lst_replace(to_push, lst);
}

void		ft_lst_replace_at(t_dlist *head, t_dlist *to_push, int at)
{
	if (at == 0 || !head || !to_push)
		return ;
	if (at < 0)
	{
		if (-at >= (int)ft_lst_len(head))
			ft_lst_replace(to_push, head->next);
		else
			ft_push_behind_at(head, to_push, at);
	}
	if (at > 0)
	{
		if (at >= (int)ft_lst_len(head))
			ft_lst_replace(to_push, head->prev);
		else
			ft_push_front_at(head, to_push, at);
	}
}
