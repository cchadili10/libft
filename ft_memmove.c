/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:44:39 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/10 15:53:22 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_count(unsigned char *p_dst, unsigned char *p_src,
	unsigned int x, unsigned int y)
{
	while (x != y)
	{
		p_dst[y] = p_src[y];
		y--; 
	}
	p_dst[y] = p_src[y];
	return ((char *)p_dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	x;
	unsigned int	y;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *) dst;
	p_src = (unsigned char *) src;
	x = 0;
	y = len - 1;
	if (!src && !dst)
		return (0);
	if (len == 0)
		return (dst);
	if (p_dst > p_src)
		return (ft_count(p_dst, p_src, x, y));
	else
	{
		while (x < len)
		{
			p_dst[x] = p_src[x];
			x++;
		}
		return ((char *)dst);
	}
}
