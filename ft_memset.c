/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:34:26 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/11 15:12:33 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	x;
	unsigned char	*p;

	p = (unsigned char *) str;
	x = 0;
	while (x < n)
	{
		p[x] = c;
		x++;
	}
	return (p);
}
