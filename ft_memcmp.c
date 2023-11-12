/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:32:39 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 01:48:53 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s2;
	unsigned char	*p_s1;
	size_t			x;

	p_s1 = (unsigned char *) s1;
	p_s2 = (unsigned char *) s2;
	x = 0;
	if (n == 0)
		return (0);
	while (x < n)
	{
		if (p_s1[x] != p_s2[x])
			return (p_s1[x] - p_s2[x]);
		x++;
	}
	if (x == n)
		return (p_s1[x - 1] - p_s2[x - 1]);
	return (p_s1[x] - p_s2[x]);
}
