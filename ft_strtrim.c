/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:16:37 by gsezgin           #+#    #+#             */
/*   Updated: 2024/10/28 14:10:16 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	int		start;
	int		end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && char_set(s1[start], set))
		start++;
	while (end > start && char_set(s1[end - 1], set))
		end--;
	p = (char *)malloc(end - start + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
