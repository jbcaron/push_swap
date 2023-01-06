/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:48:49 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:28:57 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "parse.h"

void	init_stack(t_stack *a, t_stack *b, int argc, char **argv)
{
	int	*tab;

	tab = arg_to_tab(argc, argv);
	a->tab = tab;
	a->top = argc - 1 ;
	b->tab = tab + argc;
	b->top = argc - 1;
}
