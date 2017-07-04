/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:53:00 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/04 02:55:37 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static t_arg_info	*init_flags(void)
{
	t_arg_info	*flags;
	va_list		args;

	flags = (t_arg_info*)malloc(sizeof(t_arg_info));
	args = (va_list)malloc(sizeof(va_list));
	if (!flags || !args)
		return (NULL);
	padding = 0;
	field_width = 0;
	precision = 0;
	width = 0;
	flags->args = args;
	return (flags);
}


t_arg_info	*get_next_arg(const char *fmt, va_list args, int start)
{
	int			i;
	t_arg_info	*flags;

	i = 0;
	flags = NULL;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			if (flags)
				free(flags);
			if (!(flags = init_flags()))
				return (NULL);
			ft_putnstr(fmt, i--);
			fmt = get_opt(fmt + i);
			i = 0;
		}
		i++;
	}
}
