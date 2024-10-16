/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:45:31 by ncharbog          #+#    #+#             */
/*   Updated: 2024/10/16 10:34:07 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	size_t	n;

	n = nmemb * size;
	dest = malloc(n * sizeof(char));
	if (dest == NULL)
		return (0);
	ft_memset(dest, 0, n);
	return (dest);
}
