/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:18:20 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/07 23:40:55 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	x;
	int	len;

	start = 0;
	x = 0;
	if (!s1)
		return (0);
	len = ft_strlen(s1) - 1;
	while (s1[x])
	{
		if (ft_strchr(set, s1[x++]))
			start++;
		else
			break ;
	}
	x = 0;
	while (len > 0)
	{
		if (ft_strchr(set, s1[len--]))
			x++;
		else
			break ;
	}
	return (ft_substr(s1, start, (ft_strlen(s1) - (start + x))));
}
