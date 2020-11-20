#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char *p1;
	unsigned char *p2;

	*p1 = s1;
	*p2 = s2;
	if (n == 0)
		return 0;
	while (n-- > 0)
	{
		if (*p1 - *p2 != 0)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
