/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:49:43 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 15:03:11 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "stack.h"
#include "init_stack.h"
#include "libft.h"
#include "backtracking.h"

void	sort_core(t_stack *a, t_stack *b);

/**

static void	print_stack(const t_stack *stack)
{
	size_t	i;

	i = stack->top;
	while (i)
	{
		printf("%d\n", stack->tab[i]);
		i--;
	}
}

**/

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, &b, (size_t)(argc - 1), &argv[1]);
	//sort_backtrack(&a, &b);
	//print_stack(&a);
	sort_core(&a, &b);
	ft_free_all();
	return (0);
}
