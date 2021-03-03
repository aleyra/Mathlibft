/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths3d.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:16:19 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/03 11:24:13 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS3D_H
# define MATHS3D_H

# include "math.h"

typedef struct s_pt3d
{
	float	x;
	float	y;
	float	z;
}			t_pt3d;

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}			t_vec3;

#endif
