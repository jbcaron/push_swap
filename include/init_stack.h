/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:17:48 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 18:19:43 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_STACK_H
# define INIT_STACK_H

# include <stddef.h>
# include "stack.h"

void	init_stack(t_stack *a, t_stack *b, const size_t size, char **arg);

#endif
