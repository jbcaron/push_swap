/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:23:54 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 00:07:56 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	push(t_stack *from, t_stack *to)
{
	if (from->top < 1)
		return (false);
	to->tab[++to->top] = from->tab[from->top--];
	return (true);
}
