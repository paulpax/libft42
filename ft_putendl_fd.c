/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 20:03:43 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/06 20:17:01 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	char	*line;

	line = (char*)malloc(sizeof(char) * (ft_strlen(s) + 2));
	if (s != NULL)
	{
		ft_strcpy(line, s);
		ft_strcat(line, "\n");
		write(fd, line, ft_strlen(line));
		free(line);
	}
}
