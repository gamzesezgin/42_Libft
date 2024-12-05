/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:11:44 by gsezgin           #+#    #+#             */
/*   Updated: 2024/10/28 14:02:28 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else if ((n > 0) && (n < 10))
	{
		ft_putchar_fd((n + 48), fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
