/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:56:09 by emaune            #+#    #+#             */
/*   Updated: 2018/09/24 13:02:40 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strdup(const char *s1)
{
	char *str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (str != NULL)
		ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
