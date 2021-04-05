/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:49:07 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/26 13:15:50 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	deg_to_rad(int d)
{
	float	r;

	d = d % 360;
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

	r = acos(v->z * Q_rsqrt(norme_vec3_power2(*v)));
	return (r);
}

float	angle_two_polaris(t_vec3 *v)
{
	float	r;

	r = atan(v->y * Q_rsqrt(v->x * v->x));
	return (r);
}
