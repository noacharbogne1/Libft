/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:41:22 by ncharbog          #+#    #+#             */
/*   Updated: 2024/10/09 16:58:43 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *adress;

    adress = (unsigned char *)s;
    while (n > 0)
    {
        *adress = c;
        adress++;
        n--;
    }
    return (s);
}