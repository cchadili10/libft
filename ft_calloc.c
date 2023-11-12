/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:02:15 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/11 21:09:02 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;

	if ((int)count >= 0 && (int)size >= 0)
	{
		array = malloc(count * size);
		if (!array)
			return (0);
		ft_bzero(array, count * size);
		return (array);
	}
	return (0);
}
