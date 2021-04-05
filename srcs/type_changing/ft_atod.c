/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:33:41 by lburnet           #+#    #+#             */
/*   Updated: 2021/04/02 14:00:21 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	can_atof(const char *str)
{
	int	nb_of_pt;
	int	i;

	i = 0;
	nb_of_pt = 0;
	if (str[0] == '-')
		i++;
	while (str && str[i])
	{
		if (!ft_isdigit(str[i]) || str[i] != '.')
			return (1);
		if (str[i] == '.')
			nb_of_pt++;
		i++;
	}
	if (nb_of_pt > 1)
		return (1);
	return (0);
}

static float	sign_of_atof(const char *str, int *i)
{
	float	sign;

	sign = 1;
	if (str[*i] == '-')
		sign = -1;
	if (str[*i] == '-')
		(*i)++;
	return (sign);
}

double	ft_atod(const char *str)
{
	long double	atof;
	int		i;
	float	sign;
	float	decimal;

	i = 0;
	if (str[i] == 0)
		return (0);
	sign = sign_of_atof(str, &i);
	atof = 0;
	while (ft_isdigit(str[i]))
	{
		atof = atof * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] == '.')
		i++;
	decimal = 0.1;
	while (ft_isdigit(str[i]))
	{
		atof = atof + (str[i] - '0') * decimal;
		i++;
		decimal *= 0.1;
	}
	atof *= sign;
	return ((double) atof);
}
