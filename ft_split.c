/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:51:44 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/27 15:25:01 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_nb_of_sep(const char *str, char c)
{
	int nb_of_sep;
	int i;

	nb_of_sep = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != 0)
	{
		if (str[i] == c && str[i - 1] != c)
			nb_of_sep++;
		i++;
	}
	if (nb_of_sep == 0 && str[i - 1] != c)
		nb_of_sep++;
	return (nb_of_sep);
}

int		pos_of_next_word(const char *str, char c)
{
	int j;

	j = 0;
	while (str[j] != c)
		j++;
	return (j);
}

char	*strdup_until_c(const char *src, char c)
{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	while (src[j] != c)
		j++;
	if (!(dest = (char *)malloc((j + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (src[i] && i != j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	free_all(char **strs, int i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if (!(strs = malloc((count_nb_of_sep(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_nb_of_sep(s, c))
	{
		while (s[j] == c)
			j++;
		strs[i] = strdup_until_c(&s[j], c);
		if (strs[i] == NULL)
		{
			free_all(strs, i);
			return (NULL);
		}
		i++;
		j = pos_of_next_word(&s[j], c) + j;
	}
	strs[i] = NULL;
	return (strs);
}
