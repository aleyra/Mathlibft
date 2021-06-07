#include "mathlibft.h"

int	check_vec3_same(t_vec3 v, t_vec3 u)
{
	if (!(u.x + 0.001f >= v.x && v.x >= u.x - 0.001f))
		return (0);
	if (!(u.y + 0.001f >= v.y && v.y >= u.y - 0.001f))
		return (0);
	if (!(u.z + 0.001f >= v.z && v.z >= u.z - 0.001f))
		return (0);
	return (1);
}
