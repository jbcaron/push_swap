/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_core.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:17:49 by                   #+#    #+#             */
/*   Updated: 2023/01/19 18:17:49 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_CORE_H
# define SORT_CORE_H

# include <stddef.h>

void	swap_if_order(t_stack *stack);
void	swap_if_not_order(t_stack *stack);
size_t	get_max_rank(t_stack *stack);
size_t	max(size_t x, size_t y);
void	put_top_val(t_stack *b, int search);
int		get_max(t_stack *stack);
void	sort_final(t_stack *a, t_stack *b);
void	sort_core(t_stack *a, t_stack *b);

#endif
