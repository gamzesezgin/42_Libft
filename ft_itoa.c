/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:55:14 by gsezgin           #+#    #+#             */
/*   Updated: 2024/10/29 14:13:16 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*new;
	long	nbr;

	nbr = n;
	len = ft_nbrlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	new[len] = '\0';
	while (nbr > 0)
	{
		new[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		new[0] = '-';
	if (n == 0)
		new[0] = '0';
	return (new);
}
