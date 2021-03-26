/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:36:57 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/26 15:45:31 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

/* Base changing ************************************************************ */
char				*decimal_to_hexa(int c, unsigned long long decimal);

/* Character **************************************************************** */
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_iswhitespace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/* Display ****************************************************************** */
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/* File ********************************************************************* */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
int					get_next_line(int fd, char **line);

/* List ********************************************************************* */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(
						t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

/* Memory ******************************************************************* */
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

/* Maths : ****************************************************************** */
typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}			t_vec3;

float				deg_to_rad(int d);
int					rad_to_deg(float	r);
float				angle_one_polaris(t_vec3 *v);
float				angle_two_polaris(t_vec3 *v);
void				init_tvec3_to_0(t_vec3 *org);
void				init_tvec3_to_1x(t_vec3 *i);
void				init_tvec3_to_1y(t_vec3 *j);
void				init_tvec3_to_1z(t_vec3 *k);
int					in_plane(t_vec3 *o, t_vec3 *n, t_vec3 *p);
t_vec3				rotation_around_x(t_vec3 v, float rad);
t_vec3				rotation_around_y(t_vec3 v, float rad);
t_vec3				rotation_around_z(t_vec3 v, float rad);
float				Q_rsqrt(float number);
float				norme_vec3_power2(t_vec3 a);
t_vec3				vec3_from_2pts(t_vec3 *a, t_vec3 *b);
t_vec3				sum_alg_2vec3(float l, t_vec3 *v, float m, t_vec3 *u);
float				angle_vec3v_vec3u(t_vec3 *v, t_vec3 *u);
int					in_angular_sector(
						t_vec3 *a, t_vec3 *b, t_vec3 *c, t_vec3 *p);
void				make_vec3_norm(t_vec3 *v);
int					on_sphere(t_vec3 *o, float d, t_vec3 *p);
int					check_not_aligned(t_vec3 *a, t_vec3 *b, t_vec3 *c);
t_vec3				normal_of_tr(t_vec3 *a, t_vec3 *b, t_vec3 *c);

/* String ******************************************************************* */
char				*build_str(char *s1, char c);
int					ft_charstr(char c, char *s);
char				**ft_split(const char *s, char c);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(
						char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(
						const char *haystack, const char *needle, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*strjoin_free(char *s1, char *s2, int n);

/* Type changing ************************************************************ */
int					can_atof(const char *str);
double				ft_atod(const char *str);
int					can_atoi(const char *str);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				*ft_ulltoa(unsigned long long n);

#endif
