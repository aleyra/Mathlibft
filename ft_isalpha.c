#include "libft.h"

int		ft_isalpha(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
			|| ('a' <= (unsigned char)c && (unsigned char)c <= 'z'))
		return 1;
	else
		return 0;
}
