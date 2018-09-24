/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:32:58 by emaune            #+#    #+#             */
/*   Updated: 2018/09/23 15:40:05 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

# define CONVERSION_CHARS "dsxpicXoO"

typedef struct		s_conv
{
	char			c;
	unsigned long long		n;
	wchar_t			wc;
	wchar_t			*ws;
	char			*str;
	struct s_conv	*next;
	struct s_conv	*prev;
}					t_conv;

typedef struct		s_var
{
	t_conv			*conv;
	t_conv			*temp;
	int				n;
	char			*s;
	char			c;
	char			*t1;
	char			*t2;
	wchar_t			*ws;
	wchar_t			wc;
	va_list			args;
}					t_var;

void				ft_printf(const char *control_string, ...);
char				*ft_itoa_base(int value, int base);
void				print_output(const char *s, t_var *var);
int					is_conversion_char(char c);
void				ft_putwcharstr(wchar_t *ws);
void				ft_putwchar(wchar_t ws);
char				*ft_char_to_str(char c);

#endif
