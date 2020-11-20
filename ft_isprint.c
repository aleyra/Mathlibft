#include "libft.h"

int		ft_isprint(int c)
{
	if (31 < (unsigned char)c && (unsigned char)c < 127)
		return 1;
	else
		return 0;
}
