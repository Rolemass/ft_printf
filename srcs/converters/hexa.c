/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 03:05:32 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/04 04:07:13 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_print.h"

static void	*get_arg(t_arg_info *flags)
{
	if (flags->qualifier == 'h')
		return((void*)va_arg(args, unsigned char));
	if (flags->qualifier == 'H')
		return((void*)va_arg(args, unsigned short));
	if (flags->qualifier == 'l')
		return((void*)va_arg(args, unsigned long));
	if (flags->qualifier == 'L')
		return((void*)va_arg(args, unsigned long long));
	if (flags->qualifier == 'j')
		return((void*)va_arg(args, uintmax_t));
	if (flags->qualifier == 'z')
		return((void*)va_arg(args, size_t));
	return (NULL);
}

void	printf_hexa(t_arg_info *flags)
{
	void *arg;
	char *str;

	char buffer[1024];
	//precision // field_width
	arg = get_arg(flags);
	if (flags->converter = 'x')
		str = ft_itoa_base((size_t)arg, 16, flags, 'a');
	if (flags->converter = 'X')
		str = ft_itoa_base((size_t)arg, 16, flags, 'A');

}
