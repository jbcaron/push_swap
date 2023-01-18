/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:37:39 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 18:24:13 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "backtrack.h"
#include "stack.h"
#include "moove.h"
#include "libft.h"

void	sort_backtrack(t_stack *a, t_stack *b)
{
	t_solution	op;

	op.max_depth = a->top * 5;
	op.operation = ft_calloc(sizeof(char) * (a->top * 5 + 1));
	op.depth = 0;
}

bool	stack_is_order(t_stack *a, t_stack *b)
{
	size_t	i;

	if (b->top > 0)
		return (false);
	if (a->top == 1)
		return (true);
	i = a->top - 1;
	while (i > 0)
	{
		if (a->tab[i].val < a->tab[i + 1].val)
			return (false);
		i++;
	}
	return (true);
}

int	op(t_stack *a, t_stack *b, int nb)
{
	if (nb == 1)
		return (sa());
	if (nb == 2)
		return (sb());
	if (nb == 3)
		return (ss());
	if (nb == 4)
		return (pa());
	if (nb == 5)
		return (pb());
	if (nb == 6)
		return (ra());
	if (nb == 6)
		return (rb());
	if (nb == 7)
		return (rr());
	if (nb == 8)
		return (rra());
	if (nb == 9)
		return (rrb());
	if (nb == 10)
		return (rrr());
	return (-1);
}

int	op_rev(t_stack *a, t_stack *b, int nb)
{
	if (nb == 1)
		return (sa());
	if (nb == 2)
		return (sb());
	if (nb == 3)
		return (ss());
	if (nb == 4)
		return (pb());
	if (nb == 5)
		return (pa());
	if (nb == 6)
		return (rra());
	if (nb == 6)
		return (rrb());
	if (nb == 7)
		return (rrr());
	if (nb == 8)
		return (ra());
	if (nb == 9)
		return (rb());
	if (nb == 10)
		return (rr());
	return (-1);
}

void	backtrack(t_stack *a, t_stack *b, t_solution *op)
{
	int	i;

	i = 0;
	while (i <= 10)
	{
		if (op(a, b, i) == 0)
		{
			if (stack_is_order(a, b))
			{
				op->max_depth = op->depth;
				ft_memcpy(op->opti, op->operation, op->depth + 1);
				op_rev(a, b, i);
				return ;
			}
			backtrack(a, b, op);
			op_rev(a, b, i);
		}
		i++;
	}
	if (op->depth == op->max_depth)
	{
		return ;
	}
}
