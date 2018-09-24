/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharstrdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 13:11:32 by emaune            #+#    #+#             */
/*   Updated: 2018/09/21 13:32:38 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcharstrlen(wchar_t *ws)
{
	int		i;

	i = 0;
	while (ws[i] != '\0')
		i++;
	return (i);
}

wchar_t		*ft_wcharstrdup(wchar_t		*ws)
{
	wchar_t	*result;

	result = (wchar_t*)malloc(sizeof(wchar_t) * ft_wcharstrlen(ws) + 1);
	ft_memcpy(result, ws, ft_wcharstrlen(ws));
	result[ft_wcharstrlen(ws)] = '\0';
	return (result);
}
