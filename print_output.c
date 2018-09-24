/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 13:30:40 by emaune            #+#    #+#             */
/*   Updated: 2018/09/23 15:33:14 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			print_output(const char *s, t_var *var)
{
	int			i;

	i = 0;
	var->temp = var->conv;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (is_conversion_char(s[i]) && var->temp)
			{
				ft_putstr(var->temp->str);
				var->temp = var->temp->next;
			}
			else if (s[i] == 'S' && var->temp)
			{
				ft_putwcharstr(var->temp->ws);
				var->temp = var->temp->next;
			}
			else if (s[i] == 'D')
			{
				ft_putlongnbr(var->temp->n);
				var->temp = var->temp->next;
			}
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}
