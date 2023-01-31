/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_all_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:13:21 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 17:18:37 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	ra(t_stack *a)
{
	write(1, "ra\n", 3);
	return (rot(a));
}

bool	rb(t_stack *b)
{
	write(1, "rb\n", 3);
	return (rot(b));
}

bool	rra(t_stack *a)
{
	write(1, "rra\n", 4);
	return (rev_rot(a));
}

bool	rrb(t_stack *b)
{
	write(1, "rrb\n", 4);
	return (rev_rot(b));
}
