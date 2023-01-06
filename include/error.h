/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:09:02 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/26 14:18:41 by jcaron           ###   ########.fr       */
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
