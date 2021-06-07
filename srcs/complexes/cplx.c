#include "libft.h"

t_cplx  make_cplx(float x, float y)
{
    t_cplx  z;

    z.x = x;
    z.y = y;
    return (z);
}