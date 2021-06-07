#include "mathlibft.h"

t_vec3	init_origin_vec3(void)
{
	t_vec3	o;

	o.x = 0;
	o.y = 0;
	o.z = 0;
	return (o);
}

t_vec3	init_vec3_ijk(char c)
{
	t_vec3	v;

	v = init_origin_vec3();
	if (c == 'i' || c == 'x')
		v.x = 1;
	else if (c == 'j' || c == 'y')
		v.y = 1;
	else if (c == 'k' || c == 'z')
		v.z = 1;
	return (v);
}

t_vec3	make_vec3(float x, float y, float z)
{
	t_vec3	o;

	o.x = x;
	o.y = y;
	o.z = z;
	return (o);
}

t_vec3	make_vec3_from2pts(t_vec3 a, t_vec3 b)
{
	t_vec3	ab;

	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	ab.z = b.z - a.z;
	return (ab);
}
