/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:08:16 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/15 19:16:56 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "error.h"

void __attribute__ ((noreturn))	error(enum e_code_error code)
{
	if (code == MEM_ALLOC)
		write(1, "Error : memory allocation failed\n", 33);
	else if (code == NO_ARG)
		write(1, "Error : no argument\n", 20);
	else if (code == BAD_ARG)
		write(1, "Error : invalid argument\n", 25);
	else if (code == TWO_ARG)
		write(1, "Error : duplicate argument\n", 27);
	write(2, "ERROR\n", 6);
	exit(1);
}
