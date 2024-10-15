/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:29:29 by ncharbog          #+#    #+#             */
/*   Updated: 2024/10/15 16:37:47 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	new = NULL;
	if (content)
	{
		new = malloc(sizeof(t_list));
		if (new)
		{
			new->content = content;
			new->next = NULL;
		}
	}
	return (new);
}