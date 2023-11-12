/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:54:50 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/11 22:57:05 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		x;
	unsigned char		*p;
	unsigned char		*pd;

	if (!src && !dst)
		return (0);
	p = (unsigned char *) src;
	pd = (unsigned char *) dst;
	x = 0;
	while (x < n)
	{
		pd[x] = p[x];
		x++;
	}
	return (pd);
}
