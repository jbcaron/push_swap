/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:49:43 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 20:42:54 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "stack.h"
#include "init_stack.h"
#include "libft.h"
#include "backtracking.h"

void	sort_core(t_stack *a, t_stack *b);

/*

static void	print_stack(const t_stack *stack)
{
	size_t	i;

	i = 1;
	while (i <= stack->top)
	{
		printf("elem %zd :\n", i);
		printf("\tvalue : %d\n", stack->tab[i].val);
		printf("\tchunk rank : %zd\n", stack->tab[i].chunk);
		i++;
	}
}

*/

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, &b, (size_t)(argc - 1), &argv[1]);
	//sort_backtrack(&a, &b);
	sort_core(&a, &b);
	//print_stack(&a);
	ft_free_all();
	return (0);
}
