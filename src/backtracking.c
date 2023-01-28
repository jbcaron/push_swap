/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:37:39 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/28 17:15:06 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "backtracking.h"
#include "stack.h"
#include "move.h"
#include "libft.h"
#include "stack_is_order.h"

#define DEPTH 3

static const char	*g_move_msg[11] = {
	"sa",
	"sb",
	"ss",
	"pa",
	"pb",
	"ra",
	"rb",
	"rr",
	"rra",
	"rrb",
	"rrr"
};

static bool	mv(t_stack *a, t_stack *b, char nb)
{
	if (nb == 1)
		return (swap(a));
	if (nb == 2)
		return (swap(b));
	if (nb == 3)
		return (dbl_swap(a, b));
	if (nb == 4)
		return (push(b, a));
	if (nb == 5)
		return (push(a, b));
	if (nb == 6)
		return (rot(a));
	if (nb == 6)
		return (rot(b));
	if (nb == 7)
		return (dbl_rot(a, b));
	if (nb == 8)
		return (rev_rot(a));
	if (nb == 9)
		return (rev_rot(b));
	if (nb == 10)
		return (dbl_rev_rot(a, b));
	return (-1);
}

static bool	mv_rev(t_stack *a, t_stack *b, char nb)
{
	if (nb == 1)
		return (swap(a));
	if (nb == 2)
		return (swap(b));
	if (nb == 3)
		return (dbl_swap(a, b));
	if (nb == 4)
		return (push(a, b));
	if (nb == 5)
		return (push(b, a));
	if (nb == 6)
		return (rev_rot(a));
	if (nb == 6)
		return (rev_rot(b));
	if (nb == 7)
		return (dbl_rev_rot(a, b));
	if (nb == 8)
		return (rot(a));
	if (nb == 9)
		return (rot(b));
	if (nb == 10)
		return (dbl_rot(a, b));
	return (-1);
}

static void	backtrack(t_stack *a, t_stack *b, t_solution *op)
{
	char	i;

	if (++op->depth == op->max_depth)
	{
		op->depth--;
		return ;
	}
	i = -1;
	while (++i <= 10)
	{
		if (mv(a, b, i) == true)
		{
			op->operation[op->depth - 1] = i;
			if (stack_is_order(a, b))
			{
				op->max_depth = op->depth;
				ft_memcpy(op->opti, op->operation, op->depth);
				mv_rev(a, b, i);
				break ;
			}
			backtrack(a, b, op);
			mv_rev(a, b, i);
		}
	}
	op->depth--;
}

static void	op_print(char *op, size_t depth)
{
	size_t	i;

	i = 0;
	while (i < depth)
	{
		ft_printf("%s\n", g_move_msg[(int)op[i]]);
	}
}

void	sort_backtrack(t_stack *a, t_stack *b)
{
	t_solution	op;

	if (stack_is_order(a, b))
		return ;
	op.max_depth = a->top * DEPTH;
	op.operation = ft_malloc(sizeof(char) * a->top * DEPTH);
	op.opti = ft_malloc(sizeof(char) * a->top * DEPTH);
	op.depth = 0;
	backtrack(a, b, &op);
	op_print(op.opti, op.max_depth);
}
