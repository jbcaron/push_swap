/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:48:49 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 00:03:29 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "init_stack.h"
#include "stack.h"
#include "parse.h"
#include "tab_to_index.h"
#include "libft.h"

void	init_stack(t_stack *a, t_stack *b, const size_t size, char **arg)
{
	unsigned int	*tab;

	tab = tab_to_index(arg_to_tab(size, arg), size);
	a->tab = tab;
	a->top = size;
	b->tab = ft_malloc(sizeof(*(b->tab)) * (size + 1));
	b->top = 0;
}
