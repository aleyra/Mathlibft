/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:34:28 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 16:03:18 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"


void	print_ft_memset_memset(int c, unsigned int n)// param c et n de ft_memset
{
	int				tab[n];
	unsigned int	i;

	i = 0;
	ft_memset(tab, c, n);
	printf("resultat de ft_memset\n");
	while (i < n)
		printf("%d ", tab[i++]);
	printf("\n");
}

void	print_memset(int c, int n)// param c et n de memset
{
	int tab[n];
	int i;

	i = 0;
	memset(tab, c, n * sizeof(tab[0]));
	printf("resultat de memset\n");
	while (i < n)
		printf("%d ", tab[i++]);
	printf("\n");
}

void	print_ft_bzero(unsigned int n)// n de ft_bzero
{
	void			*ptr;
	unsigned int	i;

	i = 0;
	ptr = malloc(n);
	ft_bzero(ptr, n * sizeof(ptr[0]));
	write(1, "resultat de ft_bzero\n", 21);
	while (i < 10)
	{
		write(1, &ptr[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(ptr);
}

void	print_bzero(int n)// param n de bzero
{
	void			*ptr;
	unsigned int	i;

	i = 0;
	ptr = malloc(n);
	bzero(ptr, n * sizeof(ptr[0]));
	write(1, "resultat de bzero\n", 18);
	while (i < 10)
	{
		write(1, &ptr[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(ptr);
}

void	print_memcpy_ft_memcpy(char *dest, char *src, size_t len)
{
	char *d;
	d = ft_strdup(dest);
	printf("resultat de memcpy :\n");
	printf("dest avant memcpy : %s\n", d);
	memcpy(((void *)0), ((void *)0), 3);//(d, src, len);
	printf("dest apres memcpy : %s\n", d);
	free(d);
	d = ft_strdup(dest);
	printf("resultat de ft_memcpy :\n");
	printf("dest avant ft_memcpy : %s\n", d);
	ft_memcpy(d, src, len);
	printf("dest apres ft_memcpy : %s\n", d);
	free(d);
}

void	print_calloc_ft_calloc(unsigned int count, unsigned int size)
{
	void			*p;
	unsigned int	i;

	i = 0;
	p = calloc(count, size);
	write(1, "resultat de calloc\n", 19);
	while (i < 10)
	{
		write(1, &p[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(p);
	i = 0;
	p = ft_calloc(count, size);
	write(1, "resultat de ft_calloc\n", 22);
	while (i < 10)
	{
		write(1, &p[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(p);
}

int		main(void)
{
//pour test memset et ft_memset
/*	int c = 0;
	unsigned int n = 10;
	print_memset(c, n);
	print_ft_memset(c, n);
*/
// pour test bzero et ft_bzero
/*	unsigned int m = 10;
	print_bzero(m);
	print_ft_bzero(m);
*/
//lignes pour test ft_memcpy et memcpy
/*	char		*dest, *src;
	size_t		len;

	dest = ft_strdup((void *)0);
	src = ft_strdup((void *)0);
	len = 3;
	print_memcpy_ft_memcpy(((void *)0), ((void *)0), 3);//dest, src, len);
*/
	ft_memcpy(((void *)0), ((void *)0), 3);
	memcpy(((void *)0), ((void *)0), 3);
//lignes pour test ft_memccpy et memccpy
/*	const char src[50] = "http://www.tuto3rialspoint.com";
	char dest[50];
	int c = ':';
	strcpy(dest,"Heloooo!!");
	printf("resultat de memccpy :\n");
	printf("\tdest avant memccpy : %s\n", dest);
	memccpy(dest, src, c, strlen(src) + 1);
	printf("\tdest apres memccpy : %s\n", dest);
	strcpy(dest,"Heloooo!!");
	printf("resultat de ft_memccpy :\n");
	printf("\tdest avant ft_memccpy : %s\n", dest);
	ft_memccpy(dest, src, c, strlen(src) + 1);
	printf("\tdest apres ft_memccpy : %s\n", dest);
*/
//lignes pour test ft_memmove et memmove cas ou le chevauchement pose pb
/*	char	src[50] = "bidule debile et autre test";
	void	*dest;
	dest = &src[3];
	printf("resultat de memmove :\n");
	printf("\tdest avant memmove : %s\n", dest);
	memmove(dest, src, 10);
	printf("\tdest apres memmove : %s\n", dest);
	strcpy(src, "bidule debile et autre test");
	printf("resultat de ft_memmove :\n");
	printf("\tdest avant ft_memmove : %s\n", dest);
	memmove(dest, src, 10);
	printf("\tdest apres ft_memmove : %s\n", dest);
*/
//lignes pour test ft_memchr et memchr
/*	char			str[50];
	int				c;
	unsigned int	n;

	strcpy(str, "on cherche un char");
	c = 'e';
	n = 4;
	printf("resultat de memchr\n");
	printf("%s\n", memchr(str, c, n));
	printf("resultat de ft_memchr\n");
	printf("%s\n", ft_memchr(str, c, n));
*/
//lignes pour test ft_memcmp et memcmp
/*	char			s1[50];
	char			s2[50];
	unsigned int	n;

	n = 0;
	strcpy(s1, "ceci est l");
	strcpy(s2, "ceci est la");
	printf("resultat de memcmp\n");
	printf("%d\n", memcmp(s1, s2, n));
	printf("resultat de ft_memcmp\n");
	printf("%d\n", ft_memcmp(s1, s2, n));
*/
//pour test ft_isalpha et isalpha
/*	int		c;

	c = 'G';
	printf("resultat de isalpha\n");
	printf("%d\n", isalpha(c));
	printf("resultat de ft_isalpha\n");
	printf("%d\n", ft_isalpha(c));
*/
//pour test ft_isdigit et isdigit
/*	int		c;

	c = '8';
	printf("resultat de isdigit\n");
	printf("%d\n", isdigit(c));
	printf("resultat de ft_isdigit\n");
	printf("%d\n", ft_isdigit(c));
*/
//pour test ft_isalnum et isalnum
/*	int		c;

	c = ' ';
	printf("resultat de isalnum\n");
	printf("%d\n", isalnum(c));
	printf("resultat de ft_isalnum\n");
	printf("%d\n", ft_isalnum(c));
*/
//pour test ft_isascii et isascii
/*	int		c;

	c = 140;
	printf("resultat de isascii\n");
	printf("%d\n", isascii(c));
	printf("resultat de ft_isascii\n");
	printf("%d\n", ft_isascii(c));
*/
//pour test ft_isprint et isprint
/*	int		c;

	c = 'a';
	printf("resultat de isprint\n");
	printf("%d\n", isprint(c));
	printf("resultat de ft_isprint\n");
	printf("%d\n", ft_isprint(c));
*/
//pour test ft_toupper et toupper
/*	int		c;

	c = 'g';
	printf("resultat de toupper\n");
	printf("avant toupper : %d et apres : %d\n", c, toupper(c));
	printf("resultat de ft_toupper\n");
	printf("avant ft_toupper : %d et apres : %d\n", c, ft_toupper(c));
*/
//pour test ft_tolower et tolower
/*	int		c;

	c = '8';
	printf("resultat de tolower\n");
	printf("avant tolower : %d et apres : %d\n", c, tolower(c));
	printf("resultat de ft_tolower\n");
	printf("avant ft_tolower : %d et apres : %d\n", c, ft_tolower(c));
*/
//pour test ft_strchr et strchr
/*	char	str[50];
	int		c;

	strcpy(str, "on cherche un char");
	c = 'q';
	printf("resultat de strchr\n");
	printf("%s\n", strchr(str, c));
	printf("resultat de ft_strchr\n");
	printf("%s\n", ft_strchr(str, c));
*/
//pour test ft_strrchr et strrchr
/*	char	str[50];
	int		c;

	strcpy(str, "on cherche un char");
	c = 'e';
	printf("resultat de strrchr\n");
	printf("%s\n", strrchr(str, c));
	printf("resultat de ft_strrchr\n");
	printf("%s\n", ft_strrchr(str, c));
*/
//pour test ft_strnstr et strnstr
/*	char 			str[50];
	char 			to_find[50];
	unsigned int	len;

	strcpy(str, "mon truc");
	strcpy(to_find, "mon");
	len = 2;
	printf("resultat de strnstr\n");
	printf("%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\n");
	printf("%s\n", ft_strnstr(str, to_find, len));
*/
//pour test ft_atoi et atoi
/*	char str[50];

	strcpy(str, "-20000");//2 150 000 000
	printf("la str testee : %s\n", str);
	printf("resultat de atoi\n %d\n", atoi(str));
	printf("resultat de ft_atoi\n %d\n", ft_atoi(str));
*/
//pout test ft_calloc et calloc
/*	unsigned int count;
	unsigned int size;

	count = 3;
	size = 2;
	print_calloc_ft_calloc(count, size);
*/
//pour test ft_substr
/*	const char s[50] = "coucou ici c'est Aleyra";
	unsigned int start = 5;
	size_t len = 10;
	
	printf("resultat de ft_substr\n%s\n", ft_substr(s, start, len));
*/
//pour test ft_strjoin
/*	const char	s1[50] = "coucou";
	const char	s2[50] = " toi !";
	
	printf("resultat de ft_strjoin\n%s\n", ft_strjoin(s1, s2));
*/
//pour test ft_strtrim;
/*	const char str[50] = "coucou les amis, ava ?";
	const char set[50] = "";

	printf("resultat de ft_strtrim\n%s\n", ft_strtrim(str, set));
*/
//pour test ft_split
	char **strs;
	int i;
	strs = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}

//test pour ft_itoa
/*	int n;
	n = -3456789;
	printf("resultat de ft_itoa\n%s\n", ft_itoa(n));	
*/
//test pour ft_strmapi
//test pour ft_putchar_fd
	return (0);
}

