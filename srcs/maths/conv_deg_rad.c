/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_deg_rad.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:49:07 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/10 16:12:53 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "maths3d.h"

float	deg_to_rad(int d)
{
	float	r;

	d = d % 360.0f;
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
