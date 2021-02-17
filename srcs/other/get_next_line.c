/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:04:15 by lucille           #+#    #+#             */
/*   Updated: 2021/02/17 10:14:57 by lucille          ###   ########lyon.fr   */
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

static int		verify_and_free(char *line, char *buf, int ret)
{
	if (ret == -1 || !buf || !line)
	{
		if (line)
			free(line);
		if (buf && buf[0] != ' ')
			free(buf);
		return (-1);
	}
	if (!buf)
	{
		if (line)
			free(line);
		return (-1);
	}
	return (1);
}

static int		ret_gnl(int ret_i[2], char **line, char *t, char **leftover)
{
	if ((ret_i[1] < 0) && (*line = t))
		return (0);
	t[ret_i[1]] = 0;
	*line = ft_strdup(t);
	if (!(*leftover = ft_strdup(&t[ret_i[1] + 1])))
		return (verify_and_free(t, *leftover, ret_i[0]));
	free(t);
	return (1);
}

int				get_next_line(int fd, char **line)
{
	static char	*leftover;
	char		buf[BUFFER_SIZE + 1];
	char		*t;
	int			ret_i[2];

	if (!line || BUFFER_SIZE <= 0)
		return (-1);
	ret_i[0] = BUFFER_SIZE;
	if (!(t = ft_strdup(leftover)))
		return (verify_and_free(t, leftover, ret_i[0]));
	if (leftover)
		free(leftover);
	while ((ret_i[1] = where_new_line(t)) < 0 &&
		ret_i[0] > 0)
	{
		if ((ret_i[0] = read(fd, buf, BUFFER_SIZE)) < 0)
			return (verify_and_free(t, " ", ret_i[0]));
		buf[ret_i[0]] = 0;
		if (!(t = strjoin_free(t, buf, 1)))
			return (verify_and_free(t, " ", ret_i[0]));
	}
	return (ret_gnl(ret_i, line, t, &leftover));
}
