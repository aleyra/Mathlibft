/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:39:55 by lburnet           #+#    #+#             */
/*   Updated: 2021/01/22 17:21:12 by lucille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char		*str;
	size_t		len_src;

	len_src = ft_strlen(src) + 1;
	if (!(str = (char *)malloc(len_src * sizeof(char))))
		return (NULL);
	ft_strcpy(str, src);
	if (str[len_src - 1] == 0)
		return (str);
	else
		return (NULL);
}
