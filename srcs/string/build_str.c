/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:10:00 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/19 13:41:53 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*build_str(char *s1, char c)
{
	char	*s;
	int		i;

	i = ft_strlen(s1);
	s = malloc((i + 2) * sizeof(char));
	s = ft_strcpy(s, s1);
	s[i] = c;
	s[i + 1] = 0;
	free(s1);
	return (s);
}
