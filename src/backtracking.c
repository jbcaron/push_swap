/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:37:39 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/07 12:40:08 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "moove.h"

int	sort(stack a, stack b, )
{
	t_solution	op;
	op.max_depth = a.top * 10;
	op.operation = malloc(sizeof(char) * (a.top * 10 + 1));
	op->depth = 0;
}

int	backtrack(stack a, stack b, t_solution *op)
{
	int	i;

	i = 0;
	while (i <= 10)
		if (op(a, b, i) == 0)
		{
			if (stack_is_order(a, b)x
				
			backtrack(a, b, );
		}
	if (op->depth == op->max_depth)
	{
		return ;
	}


}

int	stack_is_order(stack *a, stack *b)
{
	size_t	i;

	if (b->top > 0)
		return (0);
	i = a->top - 1;
	while (i > 0)
	{
		if (a->tab[i] < a->tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	op(stack a, stack b, int nb)
{
	if (nb == 1)
		return (swap(a));
	if (nb == 2)
		return (swap(b));
	if (nb == 3)
		return (dbl_swap(a, b));
	if (nb == 4)
		return (push(a));
	if (nb == 5)
		return (push(b));
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

int	rev_op(stack a, stack b, int nb)
{
	if (nb == 1)
		return (swap(a));
	if (nb == 2)
		return (swap(b));
	if (nb == 3)
		return (dbl_swap(a, b));
	if (nb == 4)
		return (push(b));
	if (nb == 5)
		return (push(a));
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
