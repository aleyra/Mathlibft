/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:46:37 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/30 09:47:38 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	while (*haystack != 0 && (ft_strlen(needle) < len--))
	{
		if (ft_strncmp(needle, haystack, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		else
			haystack++;
	}
	return (NULL);
}
