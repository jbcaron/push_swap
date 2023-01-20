/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 00:24:59 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	rot(t_stack *stack)
{
	size_t			i;
	unsigned int	tmp_first;

	if (stack->top < 2)
		return (false);
	tmp_first = stack->tab[stack->top];
	i = stack->top;
	while (i > 1)
	{
		stack->tab[i] = stack->tab[i - 1];
		i--;
	}
	stack->tab[i] = tmp_first;
	return (true);
}

bool	rev_rot(t_stack *stack)
{
	size_t			i;
	unsigned int	tmp_last;

	if (stack->top < 2)
		return (false);
	tmp_last = stack->tab[1];
	i = 1;
	while (i < stack->top)
	{
		stack->tab[i] = stack->tab[i + 1];
		i++;
	}
	stack->tab[i] = tmp_last;
	return (true);
}

bool	dbl_rot(t_stack *stack_1, t_stack *stack_2)
{
	if (stack_1->top < 2 || stack_2->top < 2)
		return (false);
	rot(stack_1);
	rot(stack_2);
	return (true);
}

bool	dbl_rev_rot(t_stack *stack_1, t_stack *stack_2)
{
	if (stack_1->top < 2 || stack_2->top < 2)
		return (false);
	rev_rot(stack_1);
	rev_rot(stack_2);
	return (true);
}
