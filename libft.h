#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);


typedef struct		s_list
{
	void		*content;
	struct s_list	*next;
}			t_list

#endif
