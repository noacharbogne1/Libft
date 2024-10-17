/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:19:18 by ncharbog          #+#    #+#             */
/*   Updated: 2024/10/17 12:55:44 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
//MAIN ATOI

int	main()
{
	const char	*nptr = "90";
	printf("%d", ft_atoi(nptr));
}

//MAIN BZERO

int	main()
{
	char s[] = "bonjour";
	size_t n = 7;
	ft_bzero(s, n);
	printf("%s", s);
}

//MAIN CALLOC

int	main()
{
	size_t nmemb = 3;
	size_t size = 4;
	printf("s", nmemb, size);
}

//MAIN ISALNUM

int	main()
{
	int c = 'p';
	printf("%d", )
}

//MAIN ISALPHA

int main()
{
	int c = '9';
	printf("%d", ft_isalpha(c));
}

//MAIN ISASCII

int main()
{
	int c = ',';
	printf("%d", ft_isascii(c));
}

//MAIN ISDIGIT

int main()
{
	int c = 's';
	printf("%d", ft_isdigit(c));
}

//MAIN ISPRINT

int main()
{
	int c = '\0';
	printf("%d", ft_isprint(c));
}

//MAIN ITOA

int main()
{
	int n = -1234;
	printf("%s", ft_itoa(n));
}

//MAIN LSTADD_BACK

//MAIN LSTADD_FRONT

//MAIN LSTCLEAR

//MAIN LSTDELONE

void	del(void *a)
{
	
}

int	main()
{
	char c[] = "kk";
	t_list *lst;
	lst = ft_lstnew(c, del);
}

//MAIN LSTITER

//MAIN LSTLAST

//MAIN LSTMAP

//MAIN LSTNEW

int	main()
{
	char c[] = "kk";
	t_list *lst;
	lst = ft_lstnew(c);
	
	printf("%s", lst->content);
}

//MAIN LSTSIZE

//MAIN MEMCHR

int main()
{
	char s[] = "bonjour";
	int c = 'j';
	size_t n = 7;
	printf("%s", ft_memchr(s, c, n));
}

//MAIN MEMCMP

int main()
{
	char s1[] = "coucou";
	char s2[] = "lou";
	size_t n = 3;
	printf("%d", ft_memcmp(s1, s2, n));
}

//MAIN MEMCPY

int main()
{
	char dest[] = "angouleme";
	char src[] = "angoumoisi";
	size_t n = 20;
	printf("%s\n", ft_memcpy(dest, src, n));
}

//MAIN MEMMOVE

int main()
{
	char dest[] = "bonjour";
	char src[] = "hello";
	size_t n = 6;
	printf("%s", ft_memmove(dest, src, n));
}

//MAIN MEMSET

int main()
{
	char s[] = "yoyoyo";
	int c = 'k';
	size_t n = 6;
	printf("%s", ft_memset(s, c, n));
}

//MAIN SPLIT

int main()
{
	char **tab;
	int	i = 0;
	
	tab = ft_split("   ,,,Bonjour,sss aaaa  k, ", ',');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

//MAIN STRCHR

int main()
{
	char s[] = "bonjour";
	int c = 'j';
	printf("%s", ft_strchr(s, c));
}

//MAIN STRDUP

int main()
{
	char s[] = "macron";
	printf("%s", ft_strdup(s));
}

//MAIN STRITERI

char f(unsigned int n, char c)
{
	if (n >= 0)
		c = 'l';
	return (c);
}

int main()
{
	char s[] = "bonjour";

	ft_striteri(s, (*f));
}

//MAIN STRLCAT

int main()
{
	char dst[] = "bonjour";
	char src[] = "salut";
	size_t size = 6;

	printf("%d", ft_strlcat(dst, src, size));
}

//MAIN STRLCPY

int main()
{
	char dst[] = "coucou";
	char src[] = "bonjour";
	size_t size = 7;

	printf("%d", ft_strlcpy(dst, src, size));
}

//MAIN STRLEN

int main()
{
	char s[] = "bonjourh";
	
	printf("%d", ft_strlen(s));
}

//MAIN STRMAPI

char f(unsigned int n, char c)
{
	if (n >= 0)
		c = 'l';
	return (c);
}

int main()
{
	char s[] = "bonjour";
	
	printf("%s", ft_strmapi(s, (*f)));
}

//MAIN STRNCMP

int main()
{
	char s1[] = "bonjour";
	char s2[] = "lulu";
	size_t n = 7;

	printf("%d", ft_strncmp(s1, s2, n));
}

//MAIN STRNSTR

int main()
{
	char big[] = "bonjour";
	char little[] = "nj";
	size_t len = 6;

	printf("%s", ft_strnstr(big, little, len));
}

//MAIN STRRCHR

int main()
{
	char s[] = "hellowk   l";
	int c = 'l';
	
	printf("%s", ft_strrchr(s, c));
}

//MAIN STRTRIM

int main()
{
	char s1[] = "    llkok  lllkkhhh llllkkooo ";
	char set[] = " l";

	printf("%s", ft_strtrim(s1, set));
}

//MAIN SUBSTR

int main()
{
	char s[] = "bonjour";
	unsigned int start = 4;
	size_t len = 4;

	printf("%s", ft_substr(s, start, len));
}

//MAIN TOLOWER

int main()
{
	int c = 'k';

	printf("%d", ft_tolower(c));
}

//MAIN TOUPPER

int main()
{
	int c = 'L';

	printf("%d", ft_toupper(c));
}