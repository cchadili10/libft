/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:05 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 14:48:59 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*array;
	int		x;
	int		size;

	x = 0;
	size = ft_strlen(s1);
	array = (char *) malloc(sizeof(char) * (size + 1));
	if (!(array))
		return (0);
	while (s1[x])
	{
		array[x] = s1[x];
		x++;
	}
	array[x] = '\0';
	return (array);
}
