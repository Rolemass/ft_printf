/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:53:26 by rolemass          #+#    #+#             */
/*   Updated: 2017/07/02 23:37:09 by rolemass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/..libft.h"
# include <stdarg.h>

# define SKIP_PAD	"+-#0 "
# define SKIP_QUAL	"hljz"
# define SKIP_CONV	"sSpdDioOuUxXcC"
# define ZEROPAD	1
# define PLUS		2
# define SPACE		4
# define LEFT		8
# define SPECIAL	16

// typedef struct	s_opt_modifier
// {
// 	unsigned short	hh;
// 	unsigned short	h;
// 	unsigned short	l;
// 	unsigned short	ll;
// 	unsigned short	j;
// 	unsigned short	z;
// }					t_opt_modifier;
//
// typedef struct	s_opt_padding
// {
// 	unsigned short	diez_flag;
// 	unsigned short	plus_flag;
// 	unsigned short	zero_flag;
// 	unsigned short	space_flag;
// 	unsigned short	reverse_flag;
// 	unsigned short	precision;
// }					t_opt_padding;
//
// typedef struct	s_opt_convert
// {
// 	t_opt_modifier	opt_mod;
// 	t_opt_padding	opt_padding;
// 	unsigned short	string_flag;
// 	unsigned short	char_flag;
// 	unsigned short	int_flag;
// 	unsigned short	uoctal_flag;
// 	unsigned short	uint_flag;
// 	unsigned short	hexa_flag;
// 	unsigned short	maj_hexa_flag;
// 	unsigned short	pointer_flag;
// }					t_opt_convert;

typedef struct	s_arg_info
{
	int				qualifier;
	int				precision;
	int				base;
	int				converter;
	int				field_width;
	int				padding;
	uint32_t		width;
}				t_arg_info:

#endif
