/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:17:32 by gsezgin           #+#    #+#             */
/*   Updated: 2024/10/28 19:45:38 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	p;
	const char		*end;
	size_t			len;

	end = (s + ft_strlen(s));
	len = ft_strlen(s);
	p = (unsigned char)c;
	if (p == '\0')
		return ((char *)end);
	--end;
	while (len > 0)
	{
		if (*end == p)
			return ((char *)end);
		--len;
		--end;
	}
	return (NULL);
}
