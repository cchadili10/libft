/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:01:10 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/07 23:31:53 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s1, int c)
{
	int	x;
	int	check;
	int	res;

	x = 0;
	res = 0;
	check = 0;
	while (s1[x])
	{
		while (s1[x] != c && s1[x])
		{
			check = 1;
			x++;
		}
		if (check)
			res ++;
		check = 0;
		while (s1[x] == c && s1[x])
			x++;
	}
	return (res);
}

static char	**ft_fill(char **array, const char *s, char c, int count)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (count > x)
	{
		while (s[y] != c && s[y])
			y++;
		array[x] = ft_substr(s, 0, y);
		if (!array[x])
		{
			while (x--)
				free(array[x]);
			free(array);
			return (0);
		}
		while (s[y] == c && s[y])
			y++;
		s = s + y;
		y = 0;
		x++;
	}
	array[x] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	if (!s)
		return (0);
	count = ft_count_words(s, c);
	array = (char **) malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (0);
	while (*s == c && *s)
		s++;
	array = ft_fill(array, s, c, count);
	return (array);
}
