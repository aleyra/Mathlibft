#include <stdio.h>
#include <string.h>

int main ()
{
	char 			*str;
	char 			*to_find;
	unsigned int	len;

	printf("test 1\n");
	str = "";
	to_find = "";
	len = 0;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 2\n");
	str = "";
	to_find = "s";
	len = 10;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 3\n");
	str = "   adad";
	to_find = "s";
	len = 110;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 4\n");
	str = "qweqweqws";
	to_find = "s";
	len = 110;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 5\n");
	str = " ";
	to_find = "sqw";
	len = 100;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 6\n");
	str = " ";
	to_find = " ";
	len = 110;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 7\n");
	str = "adasd ";
	to_find = " ";
	len = 110;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 8\n");
	str = " asdasdad";
	to_find = " ";
	len = 110;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 9\n");
	str = "";
	to_find = "";
	len = 10;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 10\n");//seg fault du vrai mais mien protege
	str = "";
	to_find = NULL;
	len = 10;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 11\n");
	str = NULL;
	to_find = "";
	len = 10;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 12\n");//seg fault du vrai mais pas du mien
	str = "asffsa";
	to_find = NULL;
	len = 10;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 13\n");//seg fault du vrai mais pas du mien
	str = NULL;
	to_find = "sfsf";
	len = 10;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 14\n");
	str = "qwerty";
	to_find = "qwerty";
	len = 6;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));

	printf("test 15\n");//seg fault du vrai mais pas du mien
	str = NULL;
	to_find = "sfsf";
	len = 0;
	printf("resultat de strnstr\t%s\n", strnstr(str, to_find, len));
	printf("resultat de ft_strnstr\t%s\n", ft_strnstr(str, to_find, len));
}
