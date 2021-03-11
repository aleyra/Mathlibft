/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:27:47 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/11 13:10:19 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "maths3d.h"

int	check_not_aligned(t_vec3 a, t_vec3 b, t_vec3 c)
{
	t_vec3	ab;
	t_vec3	ac;
	float	l;

	ab = vec3_from_2pts(a, b);
	ac = vec3_from_2pts(a, c);
	l = ab.x / ac.x;
	return (!(ab.y <= l * ac.y + 0.001f && ab.y >= l * ac.y - 0.001f
			&& ab.z <= l * ac.z + 0.001f && ab.z >= l * ac.z - 0.001f));
}

t_vec3	normal_of_tr(t_vec3 a, t_vec3 b, t_vec3 c)
{
	t_vec3	n;

	n.x = (b.y - a.y) * (c.z - a.z) - (b.z - a.z) * (c.y - a.y);
	n.y = (b.z - a.z) * (c.x - a.x) - (b.x - a.x) * (c.z - a.z);
	n.z = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
	return (n);
} 

