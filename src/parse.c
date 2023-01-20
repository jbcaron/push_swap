/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:57:24 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 19:17:13 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "parse.h"
#include "libft.h"
#include "error.h"

static int	check_arg(const size_t nb_arg, char **arg)
{
	size_t	i;

	i = 0;
	while (i < nb_arg)
	{
		if (!ft_str_is_int(arg[i]))
			return (false);
		i++;
	}
	return (true);
}

static int	single_tab(int *tab, const size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*arg_to_tab(const size_t nb_arg, char **arg)
{
	int		*tab;
	size_t	i;
	size_t	j;

	if (nb_arg < 1)
		error(NO_ARG);
	if (!check_arg(nb_arg, arg))
		error(BAD_ARG);
	tab = ft_malloc(sizeof(*tab) * nb_arg);
	i = 0;
	j = nb_arg - 1;
	while (i < nb_arg)
	{
		tab[i] = ft_atoi(arg[j]);
		i++;
		j--;
	}
	if (single_tab(tab, nb_arg) < 0)
	{
		ft_free(tab);
		error(TWO_ARG);
	}
	return (tab);
}
