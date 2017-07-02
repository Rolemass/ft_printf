/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_opt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:50:13 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/03 01:10:44 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uint32_t	get_precision(t_arg_info flags, char **fmt, int spe)
{
	int nb;

	while (ft_isdigit(**fmt))
		nb = nb * 10 + (*((*fmt)++) - '0');
	if (spe == ZEROPAD)
		flags->field_width = nb;
	else
		flags->precision = nb;
}


static uint32_t	get_padding(t_arg_info flags, char *fmt)
{
	while (*fmt++)
	{
		if (*fmt++ == ZEROPAD)
		{
			padding |= ZEROPAD;
			get_precision(flags, &fmt, ZEROPAD);
		}
		else if (*fmt++ == PLUS)
			padding |= PLUS;
		else if (*fmt++ == SPACE)
			padding |= SPACE;
		else if (*fmt++ == LEFT)
			padding |= LEFT;
		else if (*fmt++ == SPECIAL)
			padding |= SPECIAL
		else
			break;
	}
	return (fmt);
}

uint32_t		get_opt(char *fmt, t_arg_info flags)
{
	while (*fmt++)
	{
		if (*fmt == '%')
		{
			ft_putchar(*fmt);
			return (fmt + 1);
		}
		if (*fmt == '.')
			get_precision(flags, &fmt, SPECIAL);
		else if (ft_strchr(SKIP_PAD, *fmt))
			fmt = get_padding(flags, fmt);
		else if (ft_strchr(SKIP_QUAL, *fmt))
			fmt = get_qualifier(flags, fmt);
		else if (ft_strchr(SKIP_CONV, *fmt)
		{
			flags->converter = *fmt;
			break;
		}
	}
	return (fmt);
}
