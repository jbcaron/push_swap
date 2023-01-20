/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:17:49 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/19 18:24:55 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

enum e_code_error
{
	MEM_ALLOC,
	NO_ARG,
	BAD_ARG,
	TWO_ARG
};

void	error(enum e_code_error code);

#endif
