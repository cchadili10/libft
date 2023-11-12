/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:34:18 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 01:31:20 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	x;
	unsigned int	y;
	int				sum;

	y = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size > ft_strlen(dst))
		sum = ft_strlen(dst) + ft_strlen(src);
	else
		sum = size + ft_strlen(src);
	x = ft_strlen(dst);
	while (x < size - 1 && src[y])
	{
		dst[x] = src[y];
		y++;
		x++;
	}
	dst[x] = '\0';
	return (sum);
}
