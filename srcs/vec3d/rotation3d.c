#include "mathlibft.h"

t_vec3	rotation_around_x(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x;
	res.y = v.y * cos(rad) + v.z * sin(rad);
	res.z = v.z * cos(rad) - v.y * sin(rad);
	return (res);
}

t_vec3	rotation_around_y(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x * cos(rad) - v.z * sin(rad);
	res.y = v.y;
	res.z = v.x * sin(rad) + v.z * cos(rad);
	return (res);
}

t_vec3	rotation_around_z(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x * cos(rad) + v.y * sin(rad);
	res.y = v.y * cos(rad) - v.x * sin(rad);
	res.z = v.z;
	return (res);
}
