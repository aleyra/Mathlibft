/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:19:49 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/24 11:20:05 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
			|| ('a' <= (unsigned char)c && (unsigned char)c <= 'z'))
		return (1);
	else
		return (0);
}
