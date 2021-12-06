/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:17:30 by flplace           #+#    #+#             */
/*   Updated: 2021/02/24 17:17:33 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (lst)
	{
		if (!(new->content = f(lst->content)))
			ft_lstclear(&new, d);
		new->next = ft_lstmap(lst->next, f, d);
		return (new);
	}
	return (NULL);
}
