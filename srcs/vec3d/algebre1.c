#include "mathlibft.h"

t_vec3	alg_vec3(float l, t_vec3 *v, float m, t_vec3 *u)
{
	t_vec3	lvpmu;

	lvpmu.x = l * v->x + m * u->x;
	lvpmu.y = l * v->y + m * u->y;
	lvpmu.z = l * v->z + m * u->z;
	return (lvpmu);
}

t_vec3	add_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	r;

	r.x = a.x + b.x;
	r.y = a.y + b.y;
	r.z = a.z + b.z;
	return (r);
}

t_vec3	subs_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	r;

	r.x = a.x - b.x;
	r.y = a.y - b.y;
	r.z = a.z - b.z;
	return (r);
}

t_vec3	lambda_vec3(float l, t_vec3 v)
{
	t_vec3	r;

	r.x = l * v.x;
	r.y = l * v.y;
	r.z = l * v.z;
	return (r);
}

t_vec3	opp_vec3(t_vec3 u)
{
	t_vec3	v;

	v.x = -(u.x);
	v.y = -(u.y);
	v.z = -(u.z);
	return (v);
}
