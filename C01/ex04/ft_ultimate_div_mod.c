/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grecope- <grecope-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:20:59 by grecope-          #+#    #+#             */
/*   Updated: 2025/09/14 20:12:10 by grecope-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	transit1;
	int	transit2;

	transit1 = *a / *b;
	transit2 = *a % *b;
	*a = transit1;
	*b = transit2;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 18;
	b = 9;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, ", a);
	printf("%d, ", b);
	return (0);
}*/
