/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:23:54 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 15:58:52 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "moove.h"
#include "stack.h"

int	push(t_stack *from, t_stack *to)
{
	if (from->top < 1)
		return (-1);
	to->tab[++to->top] = from->tab[from->top--];
	write(1, "p\n", 2);
	return (0);
}
