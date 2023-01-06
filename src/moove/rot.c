/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:44:41 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	rot(t_stack *stack)
{
	size_t	i;
	int		tmp_first;

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
	rot(a);
	rot(b);
	return (0);
}

int	dbl_rev_rot(t_stack *a, t_stack *b)
{
	rev_rot(a);
	rev_rot(b);
	return (0);
}
