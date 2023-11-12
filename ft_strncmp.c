/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:09:48 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 01:02:21 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;
	unsigned char	*p2;
	unsigned char	*p1;

	x = 0;
	if (n == 0)
		return (x);
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (p1[x] && x < n)
	{
		if (p1[x] != p2[x])
			return (p1[x] - p2[x]);
		x++;
	}
	if (x == n)
		return (p1[x - 1] - p2[x - 1]);
	return (p1[x] - p2[x]);
}
