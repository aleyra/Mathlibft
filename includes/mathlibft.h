#ifndef MATHLIBFT
# define MATHLIBFT

# include <stdlib.h>
# include <unistd.h>
# include <math.h>

/* struct ****************************************************************** */
typedef struct s_vec3	t_vec3;
typedef struct s_cplx	t_cplx;

struct s_vec3
{
	float	x;
	float	y;
	float	z;
};

struct s_cplx
{
	float	x;
	float	y;
};

/* in complexes ************************************************************* */
t_cplx	alg_cplx(float l, t_cplx a, float m, t_cplx b);
t_cplx	add_cplx(t_cplx a, t_cplx b);
t_cplx	subs_cplx(t_cplx a, t_cplx b);
t_cplx	lambda_cplx(float l, t_cplx z);
t_cplx	mult_cplx(t_cplx a, t_cplx b);
t_cplx	div_cplx(t_cplx a, t_cplx b);
t_cplx	cplx_pow(t_cplx z, int i);
t_cplx  make_cplx(float x, float y);
float	module_cplx_pow2(t_cplx z);
t_cplx	conj_cplx(t_cplx z);

/* in no_geometry *********************************************************** */
float	deg_to_rad(int d);
int		rad_to_deg(float	r);

/* in vec3d ***************************************************************** */
t_vec3	alg_vec3(float l, t_vec3 *v, float m, t_vec3 *u);
t_vec3	add_vec3(t_vec3 a, t_vec3 b);
t_vec3	subs_vec3(t_vec3 a, t_vec3 b);
t_vec3	lambda_vec3(float l, t_vec3 v);
t_vec3	opp_vec3(t_vec3 u);
int		check_vec3_same(t_vec3 v, t_vec3 u);
t_vec3	init_origin_vec3(void);
t_vec3	init_vec3_ijk(char c);
t_vec3	make_vec3(float x, float y, float z);
t_vec3	make_vec3_from2pts(t_vec3 a, t_vec3 b);
float	norme_vec3_power2(t_vec3 a);
void	make_vec3_norm(t_vec3 *v);
float	vec3_dot_prod(t_vec3 v, t_vec3 u);
t_vec3	vec3_cross_prod(t_vec3 u, t_vec3 v);
t_vec3	vec3_rot_around_x(t_vec3 v, float rad);
t_vec3	vec3_rot_around_y(t_vec3 v, float rad);
t_vec3	vec3_rot_around_z(t_vec3 v, float rad);
t_vec3  vec3_rot_axis(t_vec3 v, t_vec3 axis, float rad);
int		check_not_aligned(t_vec3 a, t_vec3 b, t_vec3 c);
t_vec3	normal_of_tr(t_vec3 *a, t_vec3 *b, t_vec3 *c);

#endif
