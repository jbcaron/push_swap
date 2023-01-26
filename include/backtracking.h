/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:17:48 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/21 12:45:31 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACKING_H
# define BACKTRACKING_H

# include <stdbool.h>
# include "stack.h"

typedef struct s_solution
{
	char	*operation;
	char	*opti;
	size_t	depth;
	size_t	max_depth;
}	t_solution;

void	sort_backtrack(t_stack *a, t_stack *b);

#endif
