/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:16:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:42:59 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOOVE_H
# define MOOVE_H

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
