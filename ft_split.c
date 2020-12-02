/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:51:44 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 12:50:46 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>//

static int		count_nb_of_str(const char *str, char c)
{
	int nb_of_str;
	int i;

	nb_of_str = 1;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != 0)
	{
		if (str[i] == c && str[i - 1] != c)
			nb_of_str++;
		i++;
	}
	if (nb_of_str == 0 && str[i - 1] != c)
		nb_of_str++;
	return (nb_of_str);
}

static int		pos_of_next_word(const char *str, char c)
{
	int j;

	j = 0;
	while (str[j] != c)
		j++;
	return (j);
}

static char		*strdup_until_c(const char *src, char c)
{
	char	*dest;
	int		i;
	int		j;

	printf("dans dup\n");//
	j = 0;
	printf("j a ete init");//
	while (src[j] != c || src[j] != 0)
		j++;
	printf("taille de la str : %d", j);//
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

static void		free_all(char **strs, int i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);
}

char			**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	printf("nombre de str : %d\n", (count_nb_of_str(s, c)));//
	if (!(strs = malloc((count_nb_of_str(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_nb_of_str(s, c))
	{
		printf("ecriture de la str no %d\n", i + 1);//
		while (s[j] == c)
			j++;
		printf("pos du debut de la str : %d\n",j);//
		strs[i] = strdup_until_c(&s[j], c);
		if (strs[i] == NULL)
		{
			free_all(strs, i);
			return (NULL);
		}
		i++;
		j = pos_of_next_word(&s[j], c) + j;
	}
	printf("ecriture de NULL en i = %d\n", i);//
	strs[i] = NULL;
	return (strs);
}

int main ()
{
	int i;
	char **strs;
	strs = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	i = 0;
	while (strs[i])
	{
		printf("str no %d : %s\n",i + 1 , strs[i]);
		i++;
	}
}


