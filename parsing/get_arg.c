/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:53:00 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/01 21:04:30 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	get_next_arg(const char restrict *format, v_arg ap)
{
	int i;

	i = 0;
	while (format[i] && format[i] != '%')
		ft_putchar(format[i++]); // a buffer
	if (format[i] == '%')
		get_opt(format + i);
}
