#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char *d;
	unsigned char *s;

	*d = dest;
	*s = src;
	while(n-- > 0)
	{
		*d++ = *s++; 
	}
	return dest;
}
