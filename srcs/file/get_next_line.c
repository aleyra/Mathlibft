/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:04:15 by lucille           #+#    #+#             */
/*   Updated: 2021/03/03 16:33:24 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	where_new_line(char *buf)
{
	int	i;

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

static int	verify_and_free(char *line, char *buf, int ret)
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

static int	ret_gnl(int ret_i[2], char **line, char *t, char **leftover)
{
	if (ret_i[1] < 0)
	{	
		*line = t;
		return (0);
	}
	t[ret_i[1]] = 0;
	*line = ft_strdup(t);
	*leftover = ft_strdup(&t[ret_i[1] + 1]);
	if (!(*leftover))
		return (verify_and_free(t, *leftover, ret_i[0]));
	free(t);
	return (1);
}

static void	init_ret_(int (*ret_i)[2]*)
{
	(*ret_i)[0] = BUFFER_SIZE;
	(*ret_i)[1] = -1;
}

int	get_next_line(int fd, char **line)
{
	static char	*leftover;
	char		buf[BUFFER_SIZE + 1];
	char		*t;
	int			ret_i[2];

	if (!line || BUFFER_SIZE <= 0)
		return (-1);
	init_ret_i(&ret_i);
	t = ft_strdup(leftover);
	if (!(t))
		return (verify_and_free(t, leftover, ret_i[0]));
	if (leftover)
		free(leftover);
	while (ret_i[1] < 0 && ret_i[0] > 0)
	{
		ret_i[0] = read(fd, buf, BUFFER_SIZE);
		if (ret_i[0] < 0)
			return (verify_and_free(t, " ", ret_i[0]));
		buf[ret_i[0]] = 0;
		t = strjoin_free(t, buf, 1);
		if (!t)
			return (verify_and_free(t, " ", ret_i[0]));
		ret_i[1] = where_new_line(t);
	}
	return (ret_gnl(ret_i, line, t, &leftover));
}
