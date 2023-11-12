/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:49:46 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 15:08:49 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;
	int				x;

	p = (unsigned char *) s;
	x = 0;
	while (p[x])
	{
		if (p[x] == (unsigned char)c)
			return ((char *)p + x);
		x++;
	}
	if (p[x] == (unsigned char)c)
		return ((char *)p + x);
	return (0);
}
