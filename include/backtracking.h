/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:17:48 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 18:25:55 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACKING_H
# define BACKTRACKING_H

# include <stdbool.h>
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

bool	stack_is_order(t_stack *a, t_stack *b);
int		mv(t_stack *a, t_stack *b, int nb);
int		mv_rev(t_stack *a, t_stack *b, int nb);
void	backtrack(t_stack *a, t_stack *b, t_solution *op);
void	sort_backtrack(t_stack *a, t_stack *b);

#endif
