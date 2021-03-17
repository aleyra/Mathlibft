/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths3d.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:16:19 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/17 10:31:48 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS3D_H
# define MATHS3D_H

# include "math.h"

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}			t_vec3;

float	Q_rsqrt(float number);
float	deg_to_rad(int d);
int		rad_to_deg(float	r);
float	norme_vec3_power2(t_vec3 a);
t_vec3	vec3_from_2pts(t_vec3 a, t_vec3 b);
t_vec3	sum_alg_2vec3(float l, t_vec3 v, float m, t_vec3 u);
float	angle_vec3v_vec3u(t_vec3 v, t_vec3 u);
int		in_angular_sector(t_vec3 a, t_vec3 b, t_vec3 c, t_vec3 p);
t_vec3	rotation_around_x(t_vec3 v, float rad);
t_vec3	rotation_around_y(t_vec3 v, float rad);
t_vec3	rotation_around_z(t_vec3 v, float rad);
int		in_plane(t_vec3 o, t_vec3 n, t_vec3 p);
int		on_sphere(t_vec3 o, float d, t_vec3 p);
int		check_not_aligned(t_vec3 a, t_vec3 b, t_vec3 c);
t_vec3	normal_of_tr(t_vec3 a, t_vec3 b, t_vec3 c);
float	angle_one_polaris(t_vec3 v);
float	angle_two_polaris(t_vec3 v);

#endif
