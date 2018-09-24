/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwcharstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 13:20:05 by emaune            #+#    #+#             */
/*   Updated: 2018/09/21 14:21:21 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putwcharstr(wchar_t *ws)
{
		write(1, ws, ft_strlen((char*)ws));
}

void		ft_putwchar(wchar_t ws)
{
	if (ws <= 127)
		write(1, &ws, 1);
	else if (ws <= 2047)
		write(1, &ws, 2);
	else if (ws <= 65535)
		write(1, &ws, 3);
	else if (ws <= 1114111)
		write(1, &ws, 4);
}
