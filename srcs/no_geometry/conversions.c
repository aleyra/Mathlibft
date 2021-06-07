#include "mathlibft.h"

float	deg_to_rad(int d)
{
	float	r;

	r = d * M_PI / 180.0f;
	return (r);
}

int	rad_to_deg(float r)
{
	float	d;

	while (r > 2.0f * M_PI)
		r -= 2.0f * M_PI;
	while (r < -2.0f * M_PI)
		r += 2.0f * M_PI;
	d = 180.0f * r / M_PI;
	return (round(d));
}
