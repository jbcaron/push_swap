/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:37:39 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/25 19:20:04 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <unistd.h>
#include <stddef.h>
#include <stdbool.h>
#include "backtracking.h"
#include "stack.h"
#include "move.h"
#include "libft.h"

#define DEPTH 3

static bool	stack_is_order(t_stack *a, t_stack *b)
{
	unsigned int	i;

	if (b->top > 0)
		return (false);
	if (a->top == 1)
		return (true);
	i = a->top;
	while (i > 0)
	{
		if (a->tab[i] != a->top - i + 1)
			return (false);
		i--;
	}
	return (true);
}

static bool	mv(t_stack *a, t_stack *b, int nb)
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

static bool	mv_rev(t_stack *a, t_stack *b, int nb)
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
		if (mv(a, b, i) == true)
		{
			op->operation[op->depth - 1] = i;
			if (stack_is_order(a, b))
			{
				op->max_depth = op->depth;
				memcpy(op->opti, op->operation, op->depth);
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

static void	op_print(char *op, size_t depth)
{
	size_t	i;

	i = 0;
	while (i < depth)
	{
		if (op[i] == 1)
			write(1, "sa\n", 3);
		if (op[i] == 2)
			write(1, "sb\n", 3);
		if (op[i] == 3)
			write(1, "ss\n", 3);
		if (op[i] == 4)
			write(1, "pa\n", 3);
		if (op[i] == 5)
			write(1, "pb\n", 3);
		if (op[i] == 6)
			write(1, "ra\n", 3);
		if (op[i] == 6)
			write(1, "rb\n", 3);
		if (op[i] == 7)
			write(1, "rr\n", 3);
		if (op[i] == 8)
			write(1, "rra\n", 4);
		if (op[i] == 9)
			write(1, "rrb\n", 4);
		if (op[i] == 10)
			write(1, "rrr\n", 4);
		i++;
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
	return ;
}
