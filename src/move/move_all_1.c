/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_all_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:43:16 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 17:18:10 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	pa(t_stack *a, t_stack *b)
{
	write(1, "pa\n", 3);
	return (push(b, a));
}

bool	pb(t_stack *a, t_stack *b)
{
	write(1, "pb\n", 3);
	return (push(a, b));
}

bool	sa(t_stack *a)
{
	write(1, "sa\n", 3);
	return (swap(a));
}

bool	sb(t_stack *b)
{
	write(1, "sa\n", 3);
	return (swap(b));
}

bool	ss(t_stack *a, t_stack *b)
{
	write(1, "ss\n", 3);
	return (dbl_swap(a, b));
}
