/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 15:00:04 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/11 15:03:34 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*crt;

	crt = (*f)(lst);
	if (crt == NULL)
		return (NULL);
	new = crt;
	lst = lst->next;
	while (lst)
	{
		crt->next = (*f)(lst);
		if (crt->next == NULL)
			return (NULL);
		crt = crt->next;
		lst = lst->next;
	}
	return (new);
}
