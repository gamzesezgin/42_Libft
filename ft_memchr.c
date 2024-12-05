/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:19:07 by gsezgin           #+#    #+#             */
/*   Updated: 2024/10/28 14:01:15 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	k;

	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (n--)
	{
		if (*str == k)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
