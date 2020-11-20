#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char *p;

	*p = s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return p;
		p++;
	}
	return NULL;
}
