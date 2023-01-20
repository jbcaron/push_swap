/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_to_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:46:58 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/20 00:57:12 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

#include <stddef.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "libft.h"

static size_t	get_index(const int search, const int *tab_sorted, const size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (tab_sorted[i] == search)
			return (i);
		i++;
	}
	return (0);
}

unsigned int	*tab_to_index(int *tab, size_t size)
{
	int				*tab_sorted;
	unsigned int	*new_tab;
	size_t			i;

	tab_sorted = ft_malloc(sizeof(*tab_sorted) * size);
	memcpy(tab_sorted, tab, sizeof(*tab) * size);
	bubble_sort(tab_sorted, size);
	new_tab = ft_malloc(sizeof(*new_tab) * (size + 1));
	i = 0;
	while (i < size)
	{
		new_tab[i + 1] = (unsigned int)get_index(tab[i], tab_sorted, size) + 1;
		i++;
	}
	ft_free(tab_sorted);
	ft_free(tab);
	return (new_tab);
}
