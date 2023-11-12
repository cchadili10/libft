/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:23:40 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 00:37:20 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst1;

	if (!lst)
		return ;
	lst1 = *lst;
	if (!lst1)
	{
		*lst = new;
		return ;
	}
	while (lst1 -> next)
		lst1 = lst1 -> next;
	lst1 -> next = new;
}
