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
t_cplx  			make_cplx(float x, float y);
t_cplx				alg_cplx(float l, t_cplx a, float m, t_cplx b);
float				module_cplx_pow2(t_cplx z);
t_cplx				conj_cplx(t_cplx z);
t_cplx				mult_cplx(t_cplx a, t_cplx b);
t_cplx				div_cplx(t_cplx a, t_cplx b);
t_cplx				cplx_pow(t_cplx z, int i);

/* in no_geometry *********************************************************** */
float				deg_to_rad(int d);
int					rad_to_deg(float	r);

/* in vec3d ***************************************************************** */
void				init_tvec3_to_0(t_vec3 *org);
void				init_tvec3_to_1x(t_vec3 *i);
void				init_tvec3_to_1y(t_vec3 *j);
void				init_tvec3_to_1z(t_vec3 *k);
t_vec3				rotation_around_x(t_vec3 v, float rad);
t_vec3				rotation_around_y(t_vec3 v, float rad);
t_vec3				rotation_around_z(t_vec3 v, float rad);
float				norme_vec3_power2(t_vec3 a);
t_vec3				vec3_from_2pts(t_vec3 *a, t_vec3 *b);
t_vec3				sum_alg_2vec3(float l, t_vec3 *v, float m, t_vec3 *u);
void				make_vec3_norm(t_vec3 *v);
int					check_vec3_same(t_vec3 v, t_vec3 u);
float				dot_prod(t_vec3 v, t_vec3 u);
t_vec3				cross_prod(t_vec3 u, t_vec3 v);
t_vec3				opp_vec3(t_vec3 u);
int					check_not_aligned(t_vec3 *a, t_vec3 *b, t_vec3 *c);
t_vec3				normal_of_tr(t_vec3 *a, t_vec3 *b, t_vec3 *c);

#endif
