/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:46:37 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/26 09:43:40 by lucille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	char			*str;
	char			*to_find;
	char			*corr;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (to_find == 0)
		return (str);
	to_find = (char *)needle;
	while (*str != 0 && ((unsigned int)ft_strlen(to_find) < len))
	{
		corr = (char *)str;
		while (*corr == *to_find && *to_find != 0 && *corr != 0)
		{
			to_find++;
			corr++;
		}
		if (*to_find == 0)
			return (str);
		else
			str++;
	}
	return (NULL);
}
