/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grecope- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:54:29 by grecope-          #+#    #+#             */
/*   Updated: 2025/09/27 17:07:39 by grecope-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/*
int	main(void)
{
	write(1, "1234=", 5);
	ft_putnbr(1234);

	write(1, "\n-99=", 5);
	ft_putnbr(-99);

	write(1, "\n0=", 3);
	ft_putnbr(0);

	write(1, "\n2147483647=", 12);
	ft_putnbr(2147483647);

	write(1, "\n-2147483648=", 13);
	ft_putnbr(-2147483648);
}*/
