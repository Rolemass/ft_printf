/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 20:48:19 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/24 20:37:48 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*alst;
	t_list	*modlst;

	alst = NULL;
	if (lst)
	{
		modlst = f(lst);
		if (modlst == NULL)
			return (NULL);
		alst = modlst;
	}
	else
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		modlst->next = f(lst);
		modlst = modlst->next;
		if (!modlst)
			return (NULL);
	}
	modlst->next = NULL;
	return (alst);
}
