#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	int		i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while(i < n)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return s;
}
