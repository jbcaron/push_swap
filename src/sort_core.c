/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:39:28 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 17:55:36 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include "stack.h"
#include "moove.h"

size_t	pull_top_rank(t_stack *stack)
{
	return (stack->tab[stack->top].chunk);
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

bool	rank_present(t_stack *stack, size_t rank)
{
	size_t	i;

	i = 1;
	while (i <= stack->top)
	{
		if (stack->tab[i].chunk == rank)
			return (true);
		i++;
	}
	return (false);
}

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

void	sort_chunk_rank(t_stack *a, t_stack *b)
{
	size_t	rank;

	rank = 1;
	while (a->top)
	{
		while (pull_top_rank(a) != rank)
			ra();
		pb();
		if (rank_present(a, rank) == false)
			rank++;
	}
}

size_t	max(size_t x, size_t y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

void	put_to_top(t_stack *stack, int search)
{
	size_t	rot_op;
	size_t	rev_rot_op;

	rot_op = 0;
	rev_rot_op = 1;
	if (stack->tab[stack->top].val == search)
		return ;
	while (stack->tab[stack->top - rot_op].val != search)
		rot_op++;
	while (stack->tab[rev_rot_op].val != search)
		rev_rot_op++;
	if (rot_op <= rev_rot_op)
	{
		while (rot_op--)
			rot(stack);
	}
	else
	{
		while (rev_rot_op--)
			rev_rot(stack);
	}
}

int	get_max(t_stack *stack, size_t rank)
{
	int		max;
	size_t	i;

	max = stack->tab[1].val;
	i = 2;
	while (i <= stack->top)
	{
		if (stack->tab[i].val > max && stack->tab[i].chunk == rank)
			max = stack->tab[i].val;
		i++;
	}
	return (max);
}

void	sort_final(t_stack *a, t_stack *b)
{
	size_t	rank;

	rank = pull_top_rank(b);
	while (rank)
	{
		while (rank_present(b, rank))
		{
			put_to_top(b, get_max(b, rank));
			pa();
		}
		rank--;
	}
}

void	sort_core(t_stack *a, t_stack *b)
{
	sort_chunk_rank(a, b);
	sort_final(a, b);
}
