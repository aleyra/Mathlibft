#include "libft.h"

int		ft_isalnum(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
			|| ('a' <= (unsigned char)c && (unsigned char)c <= 'z')
			|| ('0' <= (unsigned char)c && (unsigned char)c <= '9'))
		return 1;
	else
		return 0;
}
