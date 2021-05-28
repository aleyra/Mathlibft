/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc3d_other.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:15:51 by lburnet           #+#    #+#             */
/*   Updated: 2021/05/07 12:53:27 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	make_vec3_norm(t_vec3 *v)
{
	float	n;

	n = norme_vec3_power2(*v);
	v->x = v->x / sqrt(n);
	v->y = v->y / sqrt(n);
	v->z = v->z / sqrt(n);
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

float	dot_prod(t_vec3 v, t_vec3 u)
{
	float	r;

	r = v.x * u.x + v.y * u.y + v.z * u.z;
	return (r);
}

t_vec3	cross_prod(t_vec3 u, t_vec3 v)
{
	t_vec3	cp;

	cp.x = u.y * v.z - u.z * v.y;
	cp.y = u.z * v.x - u.x * v.z;
	cp.z = u.x * v.y - u.y * v.x;
	return (cp);
}

t_vec3	opp_vec3(t_vec3 u)
{
	t_vec3	v;

	v.x = -(u.x);
	v.y = -(u.y);
	v.z = -(u.z);
	return (v);
}
