/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_fd_to_tabline.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:53:58 by lucille           #+#    #+#             */
/*   Updated: 2021/02/17 17:23:01 by lucille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**tabline_addline(char **otl, char **line, int n_line)
{
	char	**tl;
	int		i;

	if (!(tl = malloc((n_line + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < n_line - 1)
	{
		tl[i] = otl[i];
		i++;
	}
	tl[i] = *line;
	tl[i + 1] = NULL;
	free(otl);
	return (tl);
}

char			**split_fd_to_tabline(int fd)
{
	char	**tl;
	int		i;
	int		n_line;
	char	*line;

	n_line = 1;
	if (!(tl = malloc((n_line + 1) * sizeof(char *))))
		return (NULL);
	tl[1] = NULL;
	tl[0] = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		n_line++;
		tl = tabline_addline(tl, &line, n_line);
	}
	return (tl);
}
