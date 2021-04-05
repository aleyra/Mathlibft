/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_vec3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:37:22 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/26 13:15:17 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_tvec3_to_0(t_vec3 *org)
{
	org->x = 0;
	org->y = 0;
	org->z = 0;
}

void	init_tvec3_to_1x(t_vec3 *i)
{
	i->x = 1;
	i->y = 0;
	i->z = 0;
}

void	init_tvec3_to_1y(t_vec3 *j)
{
	j->x = 0;
	j->y = 1;
	j->z = 0;
}

void	init_tvec3_to_1z(t_vec3 *k)
{
	k->x = 0;
	k->y = 0;
	k->z = 1;
}
