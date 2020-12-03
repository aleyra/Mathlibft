/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:46:37 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/03 13:30:45 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == 0)
		return ((char *)haystack);
	while (ft_strlen(needle) <= len-- && *haystack != 0) 
	{
		if (ft_strncmp(needle, haystack, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		else
			haystack++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main ()
{
	char 			*str;
	char 			*to_find;
	unsigned int	len;

	str = "discnoadscn";
	to_find = "";
	len = 3;
	printf("resultat de strnstr\n");
	printf("%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\n");
	printf("%s\n", ft_strnstr(str, to_find, len));
}
