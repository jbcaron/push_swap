/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:36:54 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/17 17:32:42 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include <stddef.h>

typedef struct s_elem
{
	int		val;
	size_t	chunk;
}			t_elem;

typedef struct s_stack
{
	t_elem	*tab;
	size_t	top;
}	t_stack;

void	init_stack(t_stack *a, t_stack *b, const size_t size, char **arg);

#endif
