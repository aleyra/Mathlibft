#include "mathlibft.h"

float	module_cplx_pow2(t_cplx z)
{
	float	m;

	m = z.x * z.x + z.y * z.y;
	return (m);
}

t_cplx	conj_cplx(t_cplx z)
{
	t_cplx	x;

	x.x = z.x;
	x.y = -1 * z.y;
	return (x);
}
