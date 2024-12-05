/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:16:32 by gsezgin           #+#    #+#             */
/*   Updated: 2024/10/28 14:11:28 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;
	unsigned char	*str;

	str = (unsigned char *)s;
	p = (unsigned char)c;
	while (*str)
	{
		if (*str == p)
			return ((char *)str);
		str++;
	}
	if (p == '\0')
		return ((char *)str);
	return (NULL);
}
