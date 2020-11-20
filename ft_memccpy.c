#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *ptr;

	*ptr = dest;
	while(n-- > 0 && *src != (unsigned char)c)
	{
		*ptr++ = *src++; 
	}
	return dest;

}
