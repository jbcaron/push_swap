/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:39:28 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 15:55:12 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include "stack.h"
#include "move.h"
#include "push_by_chunk.h"

/**

void	swap_if_order(t_stack *stack)
{
	if (stack->top < 2)
		return ;
	if (stack->tab[stack->top].val < stack->tab[stack->top - 1].val)
		swap(stack);
}

void	swap_if_not_order(t_stack *stack)
{
	if (stack->top < 2)
		return ;
	if (stack->tab[stack->top].val > stack->tab[stack->top - 1].val)
		swap(stack);
}

size_t	max(size_t x, size_t y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

size_t	get_max_rank(t_stack *stack)
{
	size_t	i;
	size_t	max_rank;

	i = 1;
	max_rank = 0;
	while (i <= stack->top)
	{
		if (stack->tab[i].chunk > max_rank)
			max_rank = stack->tab[i].chunk;
		i++;
	}
	return (max_rank);
}

**/

static bool	push_if_a(t_stack *a, t_stack *b, unsigned int search)
{
	if (b->tab[b->top] == search)
	{
		pa();
		return (true);
	}
	return (false);
}

static void	put_top(t_stack *a, t_stack *b, unsigned int search)
{
	size_t	rot_op;
	size_t	rev_rot_op;

	rot_op = 1;
	rev_rot_op = 1;
	if (b->tab[b->top] == search)
		return ;
	while (b->tab[b->top - rot_op] != search)
		rot_op++;
	while (b->tab[rev_rot_op] != search)
		rev_rot_op++;
	if (rot_op <= rev_rot_op)
	{
		while (rot_op--)
		{
			if (push_if_a(a, b, search - 1) == false)
				rb();
		}
	}
	else
	{
		while (rev_rot_op--)
		{
			push_if_a(a, b, search - 1);
			rrb();
		}
	}
}

static unsigned int	get_max(t_stack *stack)
{
	unsigned int		max;
	size_t				i;

	max = stack->tab[1];
	i = 2;
	while (i <= stack->top)
	{
		if (stack->tab[i] > max)
			max = stack->tab[i];
		i++;
	}
	return (max);
}

void	sort_core(t_stack *a, t_stack *b)
{
	unsigned int	max;

	sort_chunk(a, b);
	max = get_max(b);
	while (max)
	{
		put_top(a, b, max);
		pa();
		if (a->top > 1 && a->tab[a->top] > a->tab[a->top - 1])
		{
			sa();
			max--;
		}
		max--;
	}
}