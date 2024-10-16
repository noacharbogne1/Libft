/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:52:22 by noacharbogn       #+#    #+#             */
/*   Updated: 2024/10/16 10:49:48 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && ft_check(s[i], c) > 0)
			i++;
		if (s[i] && ft_check(s[i], c) < 1)
		{
			words++;
			while (s[i] && ft_check(s[i], c) < 1)
				i++;
		}
	}
	return (words);
}

static char	*ft_fill(char const *s, char c)
{
	char	*dest;
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	j = 0;
	while (s[i] && ft_check(s[i], c) < 1)
	{
		i++;
		len++;
	}
	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (j < len)
	{
		dest[j] = s[i + j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**dest;

	i = 0;
	j = 0;
	words = ft_words(s, c);
	dest = malloc((words + 1) * sizeof(char *));
	if (dest == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && ft_check(s[i], c) > 0)
			i++;
		if (s[i] && ft_check(s[i], c) < 1)
		{
			dest[j] = ft_fill(&s[i], c);
			j++;
			while (s[i] && ft_check(s[i], c) < 1)
				i++;
		}
	}
	dest[j] = 0;
	return (dest);
}
