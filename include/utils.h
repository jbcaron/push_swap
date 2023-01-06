/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:08:32 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/26 18:00:36 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "stdlib.h"

int		ft_strlen(const char *str);
int		ft_isdigit(char c);
int		str_isdigit(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *nptr);
int		ft_isspace(char c);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
