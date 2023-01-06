/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:57:24 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/06 17:30:06 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"
#include "parse.h"
#include "error.h"

static int	str_is_int(char *str);
static int	check_arg(int argc, char **argv);
static int	single_tab(int *tab, int size);

int	*arg_to_tab(int argc, char **argv)
{
	int	*tab;
	int	i;

	if (argc < 2)
		error(NO_ARG);
	if (!check_arg(argc, argv))
		error(BAD_ARG);
	tab = malloc(sizeof(*tab) * (unsigned int)argc * 2);
	if (!tab)
		error(MEM_ALLOC);
	i = 1;
	while (i < argc)
	{
		tab[i] = ft_atoi(argv[i]);
		i++;
	}
	if (single_tab(&tab[1], argc - 1) < 0)
	{
		free(tab);
		error(TWO_ARG);
	}
	return (tab);
}

static int	str_is_int(char *str)
{
	int	len;
	int	is_neg;
	int	i;

	is_neg = 0;
	i = 0;
	if (str[i] == '-')
		is_neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str_isdigit(&str[i]))
		return (0);
	len = ft_strlen(&str[i]);
	if (len > 10)
		return (0);
	else if (len == 10)
	{
		if (is_neg && ft_strcmp(STR_MIN_INT, &str[i]) < 0)
			return (0);
		else if (!is_neg && ft_strcmp(STR_MAX_INT, &str[i]) < 0)
			return (0);
	}
	return (1);
}

static int	check_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!str_is_int(argv[i]))
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
