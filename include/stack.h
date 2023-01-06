/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:36:54 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:14:16 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include <stddef.h>

typedef struct s_stack
{
	int		*tab;
	size_t	top;
}	t_stack;

void	init_stack(t_stack *a, t_stack *b, int argc, char **argv);

#endif
