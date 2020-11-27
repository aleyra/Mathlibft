/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:43:44 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/24 11:43:56 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
			|| ('a' <= (unsigned char)c && (unsigned char)c <= 'z')
			|| ('0' <= (unsigned char)c && (unsigned char)c <= '9'))
		return (1);
	else
		return (0);
}
