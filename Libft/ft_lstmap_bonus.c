/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:16:13 by abounab           #+#    #+#             */
/*   Updated: 2023/12/16 18:25:53 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*header;
	void	*tmp_cont;

	if (!lst)
		return (NULL);
	header = NULL;
	while (lst)
	{
		tmp_cont = f(lst -> content);
		new = ft_lstnew(tmp_cont);
		if (!new)
		{
			del(tmp_cont);
			ft_lstclear(&header, del);
			return (NULL);
		}
		ft_lstadd_back(&header, new);
		lst = lst -> next;
	}
	return (header);
}
