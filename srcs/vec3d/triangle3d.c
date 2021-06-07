/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:27:47 by lburnet           #+#    #+#             */
/*   Updated: 2021/04/15 16:03:34 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_not_aligned(t_vec3 *a, t_vec3 *b, t_vec3 *c)
{
	t_vec3	ab;
	t_vec3	ac;
	float	l;
	t_vec3	o;

	ab = vec3_from_2pts(a, b);
	ac = vec3_from_2pts(a, c);
	init_tvec3_to_0(&o);
	l = 0.001;
	if (check_vec3_same(ab, o) || check_vec3_same (ac, o))
		return (0);
	if (ab.x != 0 && ac.x != 0)
		l = ab.x / ac.x;
	else if (ab.y != 0 && ac.y != 0)
		l = ab.y / ac.y;
	else if (ab.z != 0 && ac.z != 0)
		l = ab.z / ac.z;
	return (check_vec3_same(ab, sum_alg_2vec3(l, &ac, 0, &o)));
}

t_vec3	normal_of_tr(t_vec3 *a, t_vec3 *b, t_vec3 *c)
{
	t_vec3	n;

	n.x = (b->y - a->y) * (c->z - a->z) - (b->z - a->z) * (c->y - a->y);
	n.y = (b->z - a->z) * (c->x - a->x) - (b->x - a->x) * (c->z - a->z);
	n.z = (b->x - a->x) * (c->y - a->y) - (b->y - a->y) * (c->x - a->x);
	return (n);
}
