/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:34:13 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:54:56 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbsplit(char const *s, char c)
{
	size_t i;
	size_t nbword;

	i = 0;
	nbword = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nbword++;
		i++;
	}
	return (nbword);
}

static char		**ft_split_this(char **tab, int size, char const *s, char c)
{
	int		i;
	int		y;

	i = 0;
	while (i != size)
	{
		y = 0;
		if (*s == c)
			s++;
		else
		{
			y = 0;
			while (s[y] && s[y] != c)
				y++;
			tab[i] = ft_strsub(s, 0, y);
			if (tab[i] == NULL)
				return (NULL);
			i++;
			s += y;
		}
	}
	tab[i] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;

	if (!s || !c)
		return (NULL);
	i = ft_nbsplit(s, c);
	tab = (char **)malloc(sizeof(char *) * (i + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_split_this(tab, i, s, c);
	return (tab);
}
