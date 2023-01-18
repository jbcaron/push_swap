/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:48:49 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/17 17:33:20 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "stack.h"
#include "parse.h"
#include "bubble_sort.h"
#include "chunk_def.h"
#include "libft.h"

static void	stack_fill(t_stack *new, const size_t size, const int *tab)
{
	size_t	i;

	new->tab = ft_malloc(sizeof(*(new->tab)) * (size + 1));
	i = 0;
	while (tab && i < size)
	{
		new->tab[i + 1].val = tab[i];
		i++;
	}
	new->top = i;
}

void	init_stack(t_stack *a, t_stack *b, const size_t size, char **arg)
{
	int	*tab;

	tab = arg_to_tab(size, arg);
	stack_fill(a, size, tab);
	stack_fill(b, size, NULL);
	bubble_sort(tab, size);
	chunk_def(a, tab, size);
	ft_free(tab);
}
