/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:49:07 by lburnet           #+#    #+#             */
/*   Updated: 2021/04/14 14:35:24 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"//

float	deg_to_rad(int d)
{
	float	r;

	r = d * M_PI / 180.0f;
	return (r);
}

int	rad_to_deg(float r)
{
	float	d;

	while (r > 2.0f * M_PI)
		r -= 2.0f * M_PI;
	while (r < -2.0f * M_PI)
		r += 2.0f * M_PI;
	d = 180.0f * r / M_PI;
	return (round(d));
}

float	angle_one_polaris(t_vec3 *v)
{
	float	r;
	float	z;
	float	n;
	float	q;

	z = v->z;
	n = norme_vec3_power2(*v);
	q = sqrt(n);
	r = acos(z / q);
	return (r);
}

float	angle_two_polaris(t_vec3 *v)
{
	float	r;
	float	y;
	float	x;
	float	q2;
	float	q;

	if (v->x == 0)
		return (M_PI / 2);
	y = v->y;
	x = v->x;
	q2 = x * x;
	q = sqrt(q2);
	r = atan(y / q);
	return (r);
}
