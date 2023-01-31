/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:16:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 17:17:26 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_H
# define MOVE_H

# include <stdbool.h>
# include "stack.h"

bool	push(t_stack *from, t_stack *to);
bool	swap(t_stack *stack);
bool	rot(t_stack *stack);
bool	rev_rot(t_stack *stack);
bool	dbl_swap(t_stack *stack_1, t_stack *stack_2);
bool	dbl_rot(t_stack *a, t_stack *b);
bool	dbl_rev_rot(t_stack *a, t_stack *b);

bool	pa(t_stack *a, t_stack *b);
bool	pb(t_stack *a, t_stack *b);
bool	sa(t_stack *a);
bool	sb(t_stack *b);
bool	ss(t_stack *a, t_stack *b);
bool	ra(t_stack *a);
bool	rb(t_stack *b);
bool	rra(t_stack *a);
bool	rrb(t_stack *b);
bool	rr(t_stack *a, t_stack *b);
bool	rrr(t_stack *a, t_stack *b);

#endif
