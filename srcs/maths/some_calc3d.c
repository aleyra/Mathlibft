/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc3d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:19:36 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/10 16:18:59 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "maths3d.h"

float	norme_vec3_power2(t_vec3 a)
{
	float	n;

	n = a.x * a.x + a.y * a.y + a.z * a.z;
	return (n);
}

t_vec3	vec3_from_2pts(t_vec3 a, t_vec3 b)
{
	t_vec3	ab;

	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	ab.z = b.z - a.z;
	return (ab);
}

t_vec3	sum_alg_2vec3(float l, t_vec3 v, float m, t_vec3 u)
{
	t_vec3	lvpmu;

	lvpmu.x = l * v.x + m * u.x;
	lvpmu.y = l * v.y + m * u.y;
	lvpmu.z = l * v.z + m * u.z;
	return (lvpmu);
}

int	in_angular_sector(t_vec3 a, t_vec3 b, t_vec3 c, t_vec3 p)
{
	float	abac;
	float	abap;
	t_vec3	ab;
	t_vec3	ac;
	t_vec3	ap;

	ab = vec3_from_2pts(a, b);
	ac = vec3_from_2pts(a, c);
	ap = vec3_from_2pts(a, p);
	abac = acos((norme_vec3_power2(sum_alg_2vec3(
						1, ab, 1, ac)) - norme_vec3_power2(
					ab) - norme_vec3_power2(ac)) * (0.5 * Q_rsqrt(
					norme_vec3_power2(ab)) * Q_rsqrt(norme_vec3_power2(ac))));
	abap = acos((norme_vec3_power2(sum_alg_2vec3(
						1, ab, 1, ap)) - norme_vec3_power2(
					ab) - norme_vec3_power2(ap)) * (0.5 * Q_rsqrt(
					norme_vec3_power2(ab)) * Q_rsqrt(norme_vec3_power2(ap))));
	if (abac >= abap)
		return (1);
	else
		return (-1);
}
