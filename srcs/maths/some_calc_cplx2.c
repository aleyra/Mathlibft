#include "libft.h"

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