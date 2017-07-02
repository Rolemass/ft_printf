/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:53:00 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/03 01:06:33 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	get_next_arg(const char restrict *format, v_arg arg, int start)
{
	int			i;
	t_arg_info	*flags;

	i = 0;
	flags = NULL;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (flags)
				free(flags);
			flags = init_flags();
			ft_putnstr(fmt, i--);
			fmt = get_opt(format + i);
			i = 0;
		}
		i++;
	}
}
