/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:08:16 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/31 19:35:57 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "error.h"
#include "libft.h"

#if 1

void __attribute__ ((noreturn))	error(enum e_code_error code)
{
	ft_free_all();
	if (code == NO_ARG)
		write(2, "\n", 1);
	else
		write(2, "Error\n", 6);
	exit(1);
}

#endif

#if 0

void __attribute__ ((noreturn))	error(enum e_code_error code)
{
	ft_free_all();
	if (code == MEM_ALLOC)
		write(2, "Error : memory allocation failed\n", 33);
	else if (code == NO_ARG)
		write(2, "Error : no argument\n", 20);
	else if (code == BAD_ARG)
		write(2, "Error : invalid argument\n", 25);
	else if (code == TWO_ARG)
		write(2, "Error : duplicate argument\n", 27);
	exit(1);
}

#endif
