/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:18 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:46:10 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "moove.h"

int	swap(t_stack *stack)
{
	int	tmp;

	if (stack->top < 2)
		return (-1);
	tmp = stack->tab[stack->top];
	stack->tab[stack->top] = stack->tab[stack->top - 1];
	stack->tab[stack->top - 1] = tmp;
	return (0);
}

int	dbl_swap(t_stack *stack_1, t_stack *stack_2)
{
	if (swap(stack_1) < 0)
		return (-1);
	if (swap(stack_2) < 0)
	{
		swap(stack_1);
		return (-2);
	}
	return (0);
}
