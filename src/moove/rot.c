/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/15 19:21:19 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moove.h"
#include "stack.h"

int	rot(t_stack *stack)
{
	size_t	i;
	int		tmp_first;

	if (stack->top < 2)
		return (-1);
	tmp_first = stack->tab[stack->top];
	i = stack->top;
	while (i > 1)
	{
		stack->tab[i - 1] = stack->tab[i];
		i--;
	}
	stack->tab[i] = tmp_first;
	return (0);
}

int	rev_rot(t_stack *stack)
{
	size_t	i;
	int		tmp_last;

	if (stack->top < 2)
		return (-1);
	tmp_last = stack->tab[1];
	i = 1;
	while (i < stack->top)
	{
		stack->tab[i] = stack->tab[i + 1];
		i++;
	}
	stack->tab[i] = tmp_last;
	return (0);
}

int	dbl_rot(t_stack *a, t_stack *b)
{
	if (rot(a) < 0)
		return (-1);
	if (rot(b) < 0)
		return (-1);
	return (0);
}

int	dbl_rev_rot(t_stack *a, t_stack *b)
{
	if (rev_rot(a) < 0)
		return (-1);
	if (rev_rot(b) < 0)
		return (-1);
	return (0);
}
