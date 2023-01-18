/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:45:14 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 12:36:39 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACK_H
# define  BACKTRACK_H

# include "stack.h"

typedef struct s_all_satack
{
	t_stack	a;
	t_stack	b;
}	t_all_stack;

typedef struct s_solution
{
	char	*operation;
	char	*opti;
	size_t	depth;
	size_t	max_depth;
}	t_solution;

#endif
