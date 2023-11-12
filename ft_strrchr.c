/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:31:37 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 15:09:07 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p;
	int				x;

	p = (unsigned char *) s;
	x = ft_strlen(s);
	while (x > 0)
	{
		if (p[x] == (unsigned char)c)
			return ((char *)p + x);
		x--;
	}
	if (p[x] == (unsigned char)c)
		return ((char *)p + x);
	return (0);
}
