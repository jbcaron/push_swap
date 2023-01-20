/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:43:16 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 19:02:17 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	f_pa(t_stack *a, t_stack *b)
{
	write(1, "pa\n", 3);
	return (push(b, a));
}

bool	f_pb(t_stack *a, t_stack *b)
{
	write(1, "pb\n", 3);
	return (push(a, b));
}

bool	f_sa(t_stack *a)
{
	write(1, "sa\n", 3);
	return (swap(a));
}

bool	f_sb(t_stack *b)
{
	write(1, "sa\n", 3);
	return (swap(b));
}

bool	f_ss(t_stack *a, t_stack *b)
{
	write(1, "ss\n", 3);
	return (dbl_swap(a, b));
}

bool	f_ra(t_stack *a)
{
	write(1, "ra\n", 3);
	return (rot(a));
}

bool	f_rb(t_stack *b)
{
	write(1, "rb\n", 3);
	return (rot(b));
}

bool	f_rra(t_stack *a)
{
	write(1, "rra\n", 4);
	return (rev_rot(a));
}

bool	f_rrb(t_stack *b)
{
	write(1, "rrb\n", 4);
	return (rev_rot(b));
}

bool	f_rr(t_stack *a, t_stack *b)
{
	write(1, "rr\n", 3);
	return (dbl_rot(a, b));
}

bool	f_rrr(t_stack *a, t_stack *b)
{
	write(1, "rrr\n", 4);
	return (dbl_rev_rot(a, b));
}
