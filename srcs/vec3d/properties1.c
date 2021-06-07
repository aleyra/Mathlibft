#include "mathlibft.h"

float	norme_vec3_power2(t_vec3 a)
{
	float	n;

	n = a.x * a.x + a.y * a.y + a.z * a.z;
	return (n);
}

void	make_vec3_norm(t_vec3 *v)
{
	float	n;

	n = norme_vec3_power2(*v);
	v->x = v->x / sqrt(n);
	v->y = v->y / sqrt(n);
	v->z = v->z / sqrt(n);
}

float	vec3_dot_prod(t_vec3 v, t_vec3 u)
{
	float	r;

	r = v.x * u.x + v.y * u.y + v.z * u.z;
	return (r);
}

t_vec3	vec3_cross_prod(t_vec3 u, t_vec3 v)
{
	t_vec3	cp;

	cp.x = u.y * v.z - u.z * v.y;
	cp.y = u.z * v.x - u.x * v.z;
	cp.z = u.x * v.y - u.y * v.x;
	return (cp);
}
