/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_fd_to_tabline.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:53:58 by lucille           #+#    #+#             */
/*   Updated: 2021/02/17 15:25:38 by lucille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		where_new_line(char *buf)
{
	int i;

	i = 0;
	if (!buf)
		return (-2);
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static int		number_of_line(int fd)
{
	int		n_line;
	int		ret;
	char	buf[BUFFER_SIZE + 1];

	buf[BUFFER_SIZE] = 0;
	n_line = 1;
	while ((ret = read(fd, buf, BUFFER_SIZE)) > 0)
		if (where_new_line(buf) >= 0)
			n_line++;
	return(n_line);
}

char			**split_fd_to_tabline(int fd)
{
	char	**tl;
	int		i;
	int		n_line;

	i = 0;
	n_line = number_of_line(fd);
	if (!(tl = malloc((n_line + 1) * sizeof(char *))))
		return(NULL);
	while (get_next_line(fd, &(tl[i])) > 0)
		i++;
	tl[i + 1] = NULL;
	return(tl);
}