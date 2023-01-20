/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:18 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 00:25:28 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	swap(t_stack *stack)
{
	unsigned int	tmp;

	if (stack->top < 2)
		return (false);
	tmp = stack->tab[stack->top];
	stack->tab[stack->top] = stack->tab[stack->top - 1];
	stack->tab[stack->top - 1] = tmp;
	return (true);
}

bool	dbl_swap(t_stack *stack_1, t_stack *stack_2)
{
	if (stack_1->top < 2 || stack_1->top < 2)
		return (false);
	swap(stack_1);
	swap(stack_2);
	return (true);
}
