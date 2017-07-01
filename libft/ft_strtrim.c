/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:50 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/30 19:09:50 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

static int	ft_end_space(const char *s)
{
	int i;
	int count;

	count = 0;
	i = ft_strlen((char*)s) - 1;
	while (i > 0)
	{
		if (ft_is_space(s[i]) == 0)
			return (count);
		count++;
		i--;
	}
	return (0);
}

char		*ft_strtrim(const char *str)
{
	size_t	i;
	char	*new;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	if (!str)
		return (NULL);
	while (ft_is_space(str[i++]) == 1)
		count++;
	if (count == 0 && ft_end_space(str) == 0)
	{
		new = ft_strdup(str);
		return (new);
	}
	else
		i--;
	len = ft_strlen((char*)str) - i - ft_end_space(str);
	if ((new = ft_strsub(str, i, len)) == NULL)
		return (NULL);
	return (new);
}
