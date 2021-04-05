/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc3d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:19:36 by lburnet           #+#    #+#             */
/*   Updated: 2021/04/02 11:14:35 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	norme_vec3_power2(t_vec3 a)
{
	float	n;

	n = a.x * a.x + a.y * a.y + a.z * a.z;
	return (n);
}

t_vec3	vec3_from_2pts(t_vec3 *a, t_vec3 *b)
{
	t_vec3	ab;

	ab.x = b->x - a->x;
	ab.y = b->y - a->y;
	ab.z = b->z - a->z;
	return (ab);
}

t_vec3	sum_alg_2vec3(float l, t_vec3 *v, float m, t_vec3 *u)
{
	t_vec3	lvpmu;

	lvpmu.x = l * v->x + m * u->x;
	lvpmu.y = l * v->y + m * u->y;
	lvpmu.z = l * v->z + m * u->z;
	return (lvpmu);
}

//in reality, it's cos of angle
float	angle_vec3v_vec3u(t_vec3 *v, t_vec3 *u)
{
	float	rad;

	rad = (norme_vec3_power2(sum_alg_2vec3(
					1, v, 1, u)) - norme_vec3_power2(
				*v) - norme_vec3_power2(*u)) * (0.5 * Q_rsqrt(
				norme_vec3_power2(*v)) * Q_rsqrt(norme_vec3_power2(*u)));
	return (rad);
}

int	in_angular_sector(t_vec3 *a, t_vec3 *b, t_vec3 *c, t_vec3 *p)
{
	float	abac;
	float	abap;
	t_vec3	ab;
	t_vec3	ac;
	t_vec3	ap;

	ab = vec3_from_2pts(a, b);
	ac = vec3_from_2pts(a, c);
	ap = vec3_from_2pts(a, p);
	abac = angle_vec3v_vec3u(&ab, &ac);
	abap = angle_vec3v_vec3u(&ab, &ap);
	if (abac <= abap)
		return (1);
	else
		return (-1);
}
