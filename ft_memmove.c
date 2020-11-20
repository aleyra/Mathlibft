#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	  unsigned char *d;
	  unsigned char *s;
	  unsigned char *od;
	  unsigned char *os;

	  *d = dest;
	  *s = src;
	  *od = d + n - 1;
	  *os = s + n - 1;
	  if (d < s)
	  {
		  memcpy(d, s, n);
	  }
	  else
	  {
		  memcpy(od, os, n);
	  }
	  return dest;
}
