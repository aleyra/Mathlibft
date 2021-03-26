/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc3d_other.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:15:51 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/26 14:16:36 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	make_vec3_norm(t_vec3 *v)
{
	v->x = v->x * Q_rsqrt(norme_vec3_power2(*v));
	v->y = v->y * Q_rsqrt(norme_vec3_power2(*v));
	v->z = v->z * Q_rsqrt(norme_vec3_power2(*v));
}
