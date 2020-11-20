#include "libft.h"

int		ft_tolower(int c)
{
	if ('A' <= (unsigned char)c && (unsigned char)c <= 'A')
		(unsigned char)c += 32;
	return c;
}
