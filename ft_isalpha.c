/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:25:45 by hchadili          #+#    #+#             */
/*   Updated: 2023/10/31 14:25:46 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argument)
{
	if (argument >= 'a' && argument <= 'z')
		return (1);
	if (argument >= 'A' && argument <= 'Z')
		return (1);
	return (0);
}
