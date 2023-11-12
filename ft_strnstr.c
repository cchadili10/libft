/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:28:18 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 01:50:44 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	if (needle[x] == '\0')
		return ((char *)haystack);
	while (haystack[x] && x < len)
	{
		while (haystack[x + y] == needle[y] && needle[y] && x + y < len)
			y++;
		if (needle[y] == '\0')
			return (((char *)haystack) + x);
		y = 0;
		x++;
	}
	return (0);
}
