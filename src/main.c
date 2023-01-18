/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:49:43 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/18 15:59:57 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "stack.h"
#include "libft.h"

void	sort_core(t_stack *a, t_stack *b);

void	print_stack(const t_stack *stack)
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

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, &b, (size_t)(argc - 1), &argv[1]);
	sort_core(&a, &b);
	//print_stack(&a);
	ft_free_all();
	return (0);
}
