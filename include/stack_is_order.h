/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_order.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:19:38 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/28 16:24:26 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_IS_ORDER_H
# define STACK_IS_ORDER_H

# include <stdbool.h>
# include "stack.h"

bool	stack_is_order(t_stack *a, t_stack *b);

#endif
