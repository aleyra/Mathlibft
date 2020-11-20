#include "libft.h"

int		ft_toupper(int c)
{
	if ('a' <= (unsigned char)c && (unsigned char)c <= 'z')
		(unsigned char)c -= 32;
	return c;
}
