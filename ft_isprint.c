/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:41:15 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/07 01:49:00 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint( int arg )
{
	if (arg >= 32 && arg < 127)
		return (1);
	return (0);
}
