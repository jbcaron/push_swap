/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_by_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:04:23 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 17:22:21 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include "push_by_chunk.h"
#include "stack.h"
#include "move.h"

void	push_by_chunk(t_stack *a, t_stack *b)
{
	unsigned int	chunk_size;
	unsigned int	i;

	chunk_size = 9 + (unsigned int)(a->top / 20);
	i = 1;
	while (a->top)
	{
		while (a->tab[a->top] > i + chunk_size)
			ra(a);
		pb(a, b);
		if (b->tab[b->top] < i)
			rb(b);
		i++;
	}
}
