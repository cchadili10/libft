/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:15:06 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/10 15:58:26 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	y;
	char	*array;

	y = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (array = ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	array = (char *) malloc((len) * sizeof(char) + 1);
	if (!array)
		return (0);
	while (len > y && s[y])
	{
		array[y] = s[start];
		start++;
		y++;
	}
	array[y] = '\0';
	return (array);
}
