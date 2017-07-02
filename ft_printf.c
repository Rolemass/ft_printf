/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 19:03:55 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/02 22:29:18 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char* restrict format, ...)
{
	int i;
	va_list arg;

	i = 0;
	va_start(arg, format);
	get_next_arg(format, arg);
}
