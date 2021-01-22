/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:02:05 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 09:39:04 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l;

	l = *lst;
	if (l->next != NULL)
	{
		ft_lstclear(&l->next, del);
	}
	ft_lstdelone(l, del);
	*lst = NULL;
}
