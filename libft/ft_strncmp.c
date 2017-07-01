/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:26:09 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 20:05:47 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
			return
				((int)((unsigned char)(s1[i]) - (unsigned char)(s2[i])));
	}
	if (i == n)
		return (0);
	return ((int)(unsigned char)s1[i] - (unsigned char)s2[i]);
}
