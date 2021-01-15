/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:02:22 by lburnet           #+#    #+#             */
/*   Updated: 2021/01/15 12:02:56 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ull_len(unsigned long long n, unsigned long long *i)
{
	int	size;

	size = (n < 0) ? 1 : 0;
	*i = 1;
	if (n == 0)
		size++;
	while (*i < n)
	{
		*i *= 10;
		size++;
	}
	return (size);
}

char	*ft_ulltoa(unsigned long long n)
{
	char					*ulltoa;
	int						size;
	unsigned long long		i;
	int						j;

	size = ull_len(n, &i);
	if (!(ulltoa = malloc((size + 1) * sizeof(char))))
		return (NULL);
	i /= 10;
	j = 0;
	while (i > 1)
	{
		ulltoa[j++] = '0' + n / i;
		n %= i;
		i /= 10;
	}
	ulltoa[j] = '0' + n;
	ulltoa[size] = 0;
	return (ulltoa);
}
