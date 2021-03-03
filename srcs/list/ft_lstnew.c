/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:10:06 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/03 16:03:15 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!(lst))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
