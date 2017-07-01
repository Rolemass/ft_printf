/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 19:58:22 by rolemass          #+#    #+#             */
/*   Updated: 2016/11/26 19:56:08 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsize(int n)
{
	size_t size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char		*ft_itoa_neg(int n, char *str, size_t size)
{
	while (n != 0)
	{
		str[size--] = '0' - n % 10;
		n /= 10;
	}
	str[size] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	size_t	size;
	char	*str;

	size = ft_getsize(n);
	if ((str = (char*)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	if (n == 0)
		str[size - 1] = '0';
	str[size--] = '\0';
	if (n < 0)
		return (ft_itoa_neg(n, str, size));
	else if (n >= 0)
	{
		while (n != 0)
		{
			str[size--] = n % 10 + '0';
			n /= 10;
		}
	}
	return (str);
}
