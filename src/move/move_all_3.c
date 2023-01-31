/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_all_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:13:29 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 17:18:34 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "move.h"
#include "stack.h"

bool	rr(t_stack *a, t_stack *b)
{
	write(1, "rr\n", 3);
	return (dbl_rot(a, b));
}

bool	rrr(t_stack *a, t_stack *b)
{
	write(1, "rrr\n", 4);
	return (dbl_rev_rot(a, b));
}
