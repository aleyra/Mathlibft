#include "mathlibft.h"

t_cplx	alg_cplx(float l, t_cplx a, float m, t_cplx b)
{
	t_cplx	r;

	r.x = l * a.x + m * b.x;
	r.y = l * a.y + m * b.y;
	return (r);
}

t_cplx	add_cplx(t_cplx a, t_cplx b)
{
	t_cplx	r;

	r.x = a.x + b.x;
	r.y = a.y + b.y;
	return (r);
}

t_cplx	subs_cplx(t_cplx a, t_cplx b)
{
	t_cplx	r;

	r.x = a.x - b.x;
	r.y = a.y - b.y;
	return (r);
}

t_cplx	lambda_cplx(float l, t_cplx z)
{
	t_cplx	r;

	r.x = l * z.x;
	r.y = l * z.y;
	return (r);
}
