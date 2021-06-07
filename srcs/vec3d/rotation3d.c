#include "mathlibft.h"

t_vec3	vec3_rot_around_x(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x;
	res.y = v.y * cos(rad) + v.z * sin(rad);
	res.z = v.z * cos(rad) - v.y * sin(rad);
	return (res);
}

t_vec3	vec3_rot_around_y(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x * cos(rad) - v.z * sin(rad);
	res.y = v.y;
	res.z = v.x * sin(rad) + v.z * cos(rad);
	return (res);
}

t_vec3	vec3_rot_around_z(t_vec3 v, float rad)
{
	t_vec3	res;

	res.x = v.x * cos(rad) + v.y * sin(rad);
	res.y = v.y * cos(rad) - v.x * sin(rad);
	res.z = v.z;
	return (res);
}

t_vec3  vec3_rot_axis(t_vec3 v, t_vec3 axis, float rad)
{
        t_vec3  res;

        res.x = axis.x * (axis.x * v.x + axis.y * v.y + axis.z * v.z)
                * (1 - cos(rad)) + v.x * cos(rad)
                + (-axis.z * v.y + axis.y * v.z) * sin(rad);
        res.y = axis.y * (axis.x * v.x + axis.y * v.y + axis.z * v.z)
                * (1 - cos(rad)) + v.y * cos(rad)
                + (axis.z * v.x - axis.x * v.z) * sin(rad);
        res.z = axis.z * (axis.x * v.x + axis.y * v.y + axis.z * v.z)
                * (1 - cos(rad)) + v.z * cos(rad)
                + (-axis.y * v.x + axis.x * v.y) * sin(rad);
        return (res);
}