/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:19:25 by ncharbog          #+#    #+#             */
/*   Updated: 2024/10/14 17:58:51 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    int i;
    int j;
    char *dest;

    i = 0;
    j = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    dest = malloc ((len + 1) * sizeof(char));
    if (dest == NULL)
        return (0);
    while (s1[i])
    {
        dest[j] = s1[i];
        j++;
        i++;
    }
    i = 0;
    while (s2[i])
    {
        dest[j] = s2[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}