/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:35:14 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/06 18:57:14 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	d = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)malloc(sizeof(unsigned char) * n);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = s2[i];
		i++;
	}
	free(s2);
	return (dst);
}
