/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:04:33 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/10 15:58:57 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "maths3d.h"

t_vec3	rotation_around_x(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x;
	res.y = v.y * cos(rad) + v.z * sin(rad);
	res.z = v.z * cos(rad) - v.y * sin(rad);
	return (res);
}

t_vec3	rotation_around_y(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x * cos(rad) - v.z * sin(rad);
	res.y = v.y;
	res.z = v.x * sin(rad) + v.z * cos(rad);
	return (res);
}

t_vec3	rotation_around_z(t_vec3 v, float rad)
{
	t_vec3 res;

	res.x = v.x * cos(rad) + v.y * sin(rad);
	res.y = v.y * cos(rad) - v.x * sin(rad);
	res.z = v.z;
	return (res);
}
