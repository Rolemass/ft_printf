/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 02:59:27 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/04 03:58:28 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static size_t	ft_getsize(size_t n, int base)
{
	size_t size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0 && base == 10)
		size++;
	while (n != 0)
	{
		n /= base;
		size++;
	}
	return (size);
}

static char		*ft_itoa_neg(size_t n, char *str, size_t size, int base, char maj)
{
	while (n != 0)
	{
		if (n > 9 && base > 10)
			str[size--] = '0' - (n % base + (maj - 10));
		str[size--] = '0' - n % base;
		n /= base;
	}
	if (base == 10)
		str[size] = '-';
	return (str);
}

char			*ft_itoa_base(size_t n, int base, t_arg_info *flags, char maj)
{
	size_t	size;
	char	*str;

	size = ft_getsize(n);
	if ((str = (char*)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	if (n == 0)
		str[size - 1] = '0';
	flags->width = size;
	str[size--] = '\0';
	if (n < 0)
		return (ft_itoa_neg(n, str, size));
	else if (n >= 0)
	{
		while (n != 0)
		{
			if (n > 9 && base > 10)
				str[size--] = n % base + '0' + (maj - 10);
			n /= base;
		}
	}
	return (str);
}
