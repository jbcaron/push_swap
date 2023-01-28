/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:17:42 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/28 16:24:33 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "stack_is_order.h"
#include "stack.h"

bool	stack_is_order(t_stack *a, t_stack *b)
{
	size_t	i;

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
