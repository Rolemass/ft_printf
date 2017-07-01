/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:53:26 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/01 21:47:13 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/..libft.h"
# include <stdarg.h>

typedef struct	s_opt_convert
{
	unsigned short	string_flag;
	unsigned short	char_flag;
	unsigned short	int_flag;
	unsigned short	uoctal_flag;
	unsigned short	uint_flag;
	unsigned short	hexa_flag;

}					t_opt_convert;

typedef struct	s_opt_modifier
{
	unsigned short	hh;
	unsigned short	h;
	unsigned short	l;
	unsigned short	ll;
	unsigned short	j;
	unsigned short	z;
}					t_opt_spec;

typedef struct	s_opt_padding
{
	unsigned short	diez_flag;
	unsigned short	plus_flag;
	unsigned short	zero_flag;
	unsigned short	space_flag;
	unsigned short	reverse_flag;

}					t_opt_padding;



#endif
