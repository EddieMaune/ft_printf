/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 22:39:21 by emaune            #+#    #+#             */
/*   Updated: 2018/09/18 11:21:53 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int i;

	i = 0;
	if (str)
		while (*(str + i))
		{
			ft_putchar(str[i]);
			i++;
		}
}