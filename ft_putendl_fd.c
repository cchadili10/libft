/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:35:07 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/11 23:03:30 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (!s)
		return ;
	if (fd >= 0)
	{
		while (s[x])
			ft_putchar_fd(s[x++], fd);
		write(fd, "\n", 1);
	}
}
