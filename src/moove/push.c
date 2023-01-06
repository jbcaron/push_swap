/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:23:54 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:41:52 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	push(t_stack *from, t_stack *to)
{
	if (from->top < 1)
		return (-1);
	to->tab[++to->top] = from->tab[from->top--];
	return (0);
}