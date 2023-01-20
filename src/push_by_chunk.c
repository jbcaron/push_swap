/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_by_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:04:23 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 01:15:10 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include "stack.h"
#include "move.h"

static void	put_top_chunk(t_stack *a, const unsigned int max)
{
	size_t	rot_op;
	size_t	rev_rot_op;

	rot_op = 0;
	rev_rot_op = 1;
	if (a->tab[a->top] <= max)
		return ;
	while (a->tab[a->top - rot_op] > max)
		rot_op++;
	while (a->tab[rev_rot_op] > max)
		rev_rot_op++;
	if (rot_op <= rev_rot_op)
	{
		while (rot_op--)
			ra();
	}
	else
	{
		while (rev_rot_op--)
			rra();
	}
}

void	sort_chunk(t_stack *a, t_stack *b)
{
	unsigned int	chunk_size;
	unsigned int	i;

	chunk_size = 12 + (unsigned int)(a->top / 100);
	chunk_size = 15;
	i = 1;
	while (a->top)
	{
		put_top_chunk(a, i + chunk_size);
		pb();
		if (b->tab[b->top] > i + chunk_size / 2 && i > chunk_size)
			rb();
		i++;
	}
}
