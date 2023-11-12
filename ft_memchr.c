/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:37:23 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/07 01:25:30 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*p;

	x = 0;
	p = (unsigned char *)s;
	while (x < n)
	{
		if (p [x] == (unsigned char)c)
			return ((void *) p + x);
		x++;
	}
	return (0);
}
