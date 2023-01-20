/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:16:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 19:01:09 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOOVE_H
# define MOOVE_H

#include <stdbool.h>
# include "stack.h"

# define pa() f_pa(a, b)
# define pb() f_pb(a, b)
# define sa() f_sa(a)
# define sb() f_sa(b)
# define ss() f_ss(a, b)
# define ra() f_ra(a)
# define rb() f_rb(b)
# define rra() f_rra(a)
# define rrb() f_rrb(b)
# define rr() f_rr(a, b)
# define rrr() f_rrr(a, b)

bool	push(t_stack *from, t_stack *to);
bool	swap(t_stack *stack);
bool	rot(t_stack *stack);
bool	rev_rot(t_stack *stack);
bool	dbl_swap(t_stack *stack_1, t_stack *stack_2);
bool	dbl_rot(t_stack *a, t_stack *b);
bool	dbl_rev_rot(t_stack *a, t_stack *b);

bool	f_pa(t_stack *a, t_stack *b);
bool	f_pb(t_stack *a, t_stack *b);
bool	f_sa(t_stack *a);
bool	f_sb(t_stack *b);
bool	f_ss(t_stack *a, t_stack *b);
bool	f_ra(t_stack *a);
bool	f_rb(t_stack *b);
bool	f_rra(t_stack *a);
bool	f_rrb(t_stack *b);
bool	f_rr(t_stack *a, t_stack *b);
bool	f_rrr(t_stack *a, t_stack *b);

#endif
