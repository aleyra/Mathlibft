/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:39:55 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/03 16:09:41 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*str;
	size_t		len_src;

	len_src = ft_strlen(src) + 1;
	str = (char *)malloc(len_src * sizeof(char));
	if (!(str))
		return (NULL);
	ft_strcpy(str, src);
	if (str[len_src - 1] == 0)
		return (str);
	else
		return (NULL);
}
