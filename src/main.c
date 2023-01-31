/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:49:43 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 19:34:41 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "stack.h"
#include "init_stack.h"
#include "libft.h"
#include "backtracking.h"
#include "sort_core.h"

#if 0

static void	print_stack(const t_stack *stack)
{
	size_t	i;

	i = stack->top;
	while (i)
	{
		ft_printf("%d\n", stack->tab[i]);
		i--;
	}
}

#endif

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, &b, (size_t)(argc - 1), &argv[1]);
	if (argc <= 6)
		sort_backtrack(&a, &b);
	else
		sort_core(&a, &b);
	ft_free_all();
	return (0);
}
