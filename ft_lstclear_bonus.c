/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:50:29 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/11 19:33:29 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ls;
	void	*nex;

	if (!lst || !*lst || !del)
		return ;
	ls = *lst;
	while (ls)
	{
		nex = ls->next;
		ft_lstdelone(ls, del);
		ls = nex;
	}
	*lst = 0;
}
