/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:24:24 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/09 12:07:39 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a “fresh” substring from the string
**	given as argument. The substring begins at indexstart and is of size len.
**	If start and len aren’t refering to a valid substring,
**	the behavior is undefined.
**	If the allocation fails, the function returns NULL.
*/

static int	ft_custom_len(char const *s, unsigned int start,
							unsigned long int len)
{
	unsigned long int	i;

	i = 0;
	s += start;
	while (*s++ && i < len)
		i++;
	return (i);
}

static char	*ft_error_return(void)
{
	char	*error_res;

	error_res = (char *)malloc((sizeof(char) * 1));
	if (!error_res)
		return (NULL);
	error_res[0] = '\0';
	return (error_res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	int					m_size;
	char				*substr;

	i = 0;
	if (start > (unsigned int)ft_strlen(s))
		return (ft_error_return());
	m_size = ft_custom_len(s, start, len);
	substr = (char *)malloc((sizeof(char) * m_size) + 1);
	if (!substr)
		return (0);
	s += start;
	while (*s && i < len)
	{
		substr[i] = *s++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
