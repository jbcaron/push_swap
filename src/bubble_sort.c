/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:56:00 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/17 15:09:24 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "libft.h"

void	bubble_sort(int *tab, size_t size)
{
	size_t	i;
	bool	is_sorted;
	int		tmp;

	is_sorted = false;
	while (!is_sorted)
	{
		is_sorted = true;
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				is_sorted = false;
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
			}
			i++;
		}
	}
	return ;
}
