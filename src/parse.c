/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:57:24 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/15 18:31:24 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "libft.h"
#include "error.h"

static int	check_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!ft_str_is_int(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	single_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] == tab[j] && i != j)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*arg_to_tab(int argc, char **argv)
{
	int	*tab;
	int	i;

	if (argc < 2)
		error(NO_ARG);
	if (!check_arg(argc, argv))
		error(BAD_ARG);
	tab = ft_malloc(sizeof(*tab) * (unsigned int)argc * 2);
	i = 1;
	while (i < argc)
	{
		tab[i] = ft_atoi(argv[i]);
		i++;
	}
	if (single_tab(&tab[1], argc - 1) < 0)
	{
		ft_free(tab);
		error(TWO_ARG);
	}
	return (tab);
}
