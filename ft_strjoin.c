/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:44:11 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 14:49:55 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*array;
	int		size;

	x = 0;
	y = 0;
	if (!s1 && !s2)
		return (0);
	size = (ft_strlen(s1) + ft_strlen(s2));
	array = (char *) malloc((sizeof(char) * size) + 1);
	if (!array)
		return (0);
	while (s1[x])
	{
		array[x] = s1[x];
		x++;
	}
	while (s2[y])
		array[x++] = s2[y++];
	array[size] = '\0';
	return (array);
}
