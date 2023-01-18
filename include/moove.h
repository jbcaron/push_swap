/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:16:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 15:51:16 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOOVE_H
# define MOOVE_H

# include "stack.h"

# define pa() push(b, a)
# define pb() push(a, b)
# define sa() swap(a)
# define sb() swap(b)
# define ss() dbl_swap(a, b)
# define ra() rot(a)
# define rb() rot(b)
# define rra() rev_rot(a)
# define rrb() rev_rot(b)
# define rr() dbl_rot(a, b)
# define rrr() dbl_rev_rot(a, b)


enum e_name
{
	A,
	B
};
enum e_dir
{
	UP,
	DOWN
};

int	push(t_stack *from, t_stack *to);
int	swap(t_stack *stack);
int	rot(t_stack *stack);
int	rev_rot(t_stack *stack);
int	dbl_swap(t_stack *stack_1, t_stack *stack_2);
int	dbl_rot(t_stack *a, t_stack *b);
int	dbl_rev_rot(t_stack *a, t_stack *b);

#endif
