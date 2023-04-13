/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:32:56 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/10 19:48:05 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    * Allocates (with malloc(3)) and returns a new node.
    * The member variable ’content’ is initialized with
    * the value of the parameter ’content’. The variable
    * ’next’ is initialized to NULL.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = (t_list *)malloc(sizeof(t_list));
	if (!tab)
		return (NULL);
	tab->content = content;
	tab->next = NULL;
	return (tab);
}
