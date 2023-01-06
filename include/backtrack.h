/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:45:14 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 19:03:04 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACK_H
# define  BACKTRACK_H

#include "stack.h"

typedef struct s_all_atack
{
	t_stack	a;
	t_stack	b;
}	t_all_stack;

int (*moove)(t_all_stack stacks)[7];

#endif
