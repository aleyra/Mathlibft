/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:05:07 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/26 13:15:29 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	Q_rsqrt(float number)
{
	long		i;
	float		x2;
	float		y;
	const float	threehalfs = 1.5F;

	x2 = number * 0.5F;
	y = number;
	i = *(long *)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(float *)&i;
	y = y * (threehalfs - (x2 * y * y));
	y = y * (threehalfs - (x2 * y * y));
	y = y * (threehalfs - (x2 * y * y));
	return (y);
}
