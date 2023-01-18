/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_def.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:01:31 by                   #+#    #+#             */
/*   Updated: 2023/01/17 15:07:50 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_DEF_H
# define CHUNK_DEF_H

# include <stddef.h>
# include "stack.h"

void	chunk_def(t_stack *stack, int *tab_sorted, const size_t size);

#endif
