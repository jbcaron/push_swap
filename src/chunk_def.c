/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_def.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:21:52 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 17:59:40 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "chunk_def.h"
#include "stack.h"

static size_t	ft_sqrt(size_t nb)
{
	size_t	i;	

	i = 1;
	while (i < nb / i)
		i++;
	return (i);
}

static size_t	get_rank(const int search, int *tab_sorted, const size_t size,
		size_t chunk_part)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (tab_sorted[i] == search)
			return (i * chunk_part / size + 1);
		i++;
	}
	return (0);
}

void	chunk_def(t_stack *stack, int *tab_sorted, const size_t size)
{
	size_t	i;
	size_t	chunk_part;

	i = 1;
	chunk_part = ft_sqrt(size) / 2;
	while (i <= stack->top)
	{
		stack->tab[i].chunk = get_rank(stack->tab[i].val, tab_sorted, size,
				chunk_part);
		i++;
	}
	return ;
}
