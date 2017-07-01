/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_split_argv.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:42:15 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 21:13:56 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_lst_split_argv(int argc, char **argv)
{
	int		i;
	t_dlist	*head;
	t_dlist	*list;

	i = 1;
	if (!argv || !argc || argc < 2)
		return (NULL);
	if ((head = ft_init_head(argv[1])) == NULL)
		return (NULL);
	while (i < argc - 1)
	{
		i++;
		if ((list = ft_create_elem(argv[i])) == NULL)
			return (NULL);
		ft_lst_push_back(list, head);
	}
	return (head);
}
