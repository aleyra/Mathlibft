/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc3d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:19:36 by lburnet           #+#    #+#             */
/*   Updated: 2021/05/28 10:49:39 by lburnet          ###   ########lyon.fr   */
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
