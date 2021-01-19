/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_to_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:02:30 by lburnet           #+#    #+#             */
/*   Updated: 2021/01/19 13:48:27 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_in_hexa(unsigned long long nb)
{
	unsigned long long	power_base;
	int					size_in_base;

	size_in_base = 0;
	power_base = 1;
	while (nb > 0)
	{
		nb /= 16;
		size_in_base++;
	}
	return (size_in_base);
}

static void		nb_to_hexa(unsigned long long nb, char *str, char *base,
					int size)
{
	unsigned int			new_numeral;
	unsigned long long		power_base;
	int						i;

	i = 0;
	power_base = 1;
	while (size > 0)
	{
		new_numeral = nb % 16;
		str[size] = base[new_numeral];
		nb = nb / 16;
		size--;
	}
	str[size] = base[nb];
}

char			*decimal_to_hexa(int c, unsigned long long decimal)
{
	char	*base;
	int		size;
	char	*str;

	if (c >= 'a' && c <= 'z')
		base = ft_strdup("0123456789abcdef");
	else if (c >= 'A' && c <= 'Z')
		base = ft_strdup("0123456789ABCDEF");
	else
	{
		base = NULL;
		return (NULL);
	}
	size = size_in_hexa(decimal) + 1;
	if (!(str = (char *)malloc(size * sizeof(char))))
		return (NULL);
	nb_to_hexa(decimal, str, base, size - 2);
	str[size - 1] = 0;
	free(base);
	return (str);
}
