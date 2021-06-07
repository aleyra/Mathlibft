#include "mathlibft.h"

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

t_cplx	cplx_pow(t_cplx z, int i)
{
	t_cplx	res;
	int		j;

	j = 1;
	if (i == 0)
		res = make_cplx(1, 1);
	if (i == 1)
		res = z;
	else if (i < 0 && i != -2147483648)
		res = cplx_pow(div_cplx(make_cplx(1, 0), z), -1 * i);
	else if (i == -2147483648)
		res = mult_cplx(cplx_pow(div_cplx(make_cplx(1, 0), z), 2147483647),
				div_cplx(make_cplx(1, 0), z));
	else
	{
		res = z;
		while (++j <= i)
			res = mult_cplx(res, z);
	}
	return (res);
}
