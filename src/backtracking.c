/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:37:39 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 18:42:47 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "backtracking.h"
#include "stack.h"
#include "move.h"
#include "libft.h"

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
		i--;
	}
	return (true);
}

int	mv(t_stack *a, t_stack *b, int nb)
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

int	mv_rev(t_stack *a, t_stack *b, int nb)
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

	op->depth++;
	if (op->depth == op->max_depth)
	{
		op->depth--;
		return ;
	}
	i = 0;
	while (i <= 10)
	{
		if (mv(a, b, i) == 0)
		{
			if (stack_is_order(a, b))
			{
				op->max_depth = op->depth;
				ft_memcpy(op->opti, op->operation, op->depth + 1);
				mv_rev(a, b, i);
				op->depth--;
				return ;
			}
			backtrack(a, b, op);
			mv_rev(a, b, i);
		}
		i++;
	}
	op->depth--;
	return ;
}

void	sort_backtrack(t_stack *a, t_stack *b)
{
	t_solution	op;

	op.max_depth = a->top * 5;
	op.operation = ft_calloc(sizeof(char), a->top * 5 + 1);
	op.opti = ft_calloc(sizeof(char), a->top * 5 + 1);
	op.depth = 0;
	backtrack(a, b, &op);
	//op_print(op.opti);
	return ;
}
