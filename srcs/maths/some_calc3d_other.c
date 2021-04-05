/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc3d_other.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:15:51 by lburnet           #+#    #+#             */
/*   Updated: 2021/04/02 16:09:04 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	make_vec3_norm(t_vec3 *v)
{
	v->x = v->x * Q_rsqrt(norme_vec3_power2(*v));
	v->y = v->y * Q_rsqrt(norme_vec3_power2(*v));
	v->z = v->z * Q_rsqrt(norme_vec3_power2(*v));
}

int	check_vec3_same(t_vec3 v, t_vec3 u)
{
	if (!(u.x + 0.001f >= v.x && v.x >= u.x - 0.001f))
		return (0);
	if (!(u.y + 0.001f >= v.y && v.y >= u.y - 0.001f))
		return (0);
	if (!(u.z + 0.001f >= v.z && v.z >= u.z - 0.001f))
		return (0);
	return (1);
}
