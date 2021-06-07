#include "libft.h"

t_cplx	alg_cplx(float l, t_cplx a, float m, t_cplx b)
{
	t_cplx	r;

	r.x = l * a.x + m * b.x;
	r.y = l * a.y + m * b.y;
	return (r);
}

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

t_cplx	mult_cplx(t_cplx a, t_cplx b)
{
	t_cplx	z;

	z.x = a.x * b.x - a.y * b.y;
	z.y = a.x * b.y + a.y * b.x;
	return (z);
}

t_cplx	div_cplx(t_cplx a, t_cplx b)
{
	t_cplx	z;

	z = mult_cplx(a, conj_cplx(b));
	z = alg_cplx(1 / module_cplx_pow2(b), z, 0, a);
	return (z);
}
