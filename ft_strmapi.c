/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:49:15 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/12 01:49:12 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*array;
	unsigned int		x;

	x = 0;
	if (!s)
		return (0);
	array = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!array)
		return (0);
	while (s[x])
	{
		array[x] = f(x, s[x]);
		x++;
	}
	array[x] = '\0';
	return (array);
}
