/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:47:50 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/06 19:03:01 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	s1_size;
	size_t	s2_size;

	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (s2_size == 0)
		return ((char *)s1);
	while (s1_size - i >= s2_size)
	{
		if (s1[i] == s2[0])
			if (ft_strncmp(&s1[i], s2, s2_size) == 0)
				return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
