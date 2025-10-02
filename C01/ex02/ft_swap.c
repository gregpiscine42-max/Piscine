/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grecope- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:50:40 by grecope-          #+#    #+#             */
/*   Updated: 2025/09/15 11:50:57 by grecope-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	transit1;
	int	transit2;

	transit1 = *a;
	transit2 = *b;
	*a = transit2;
	*b = transit1;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_swap (&a, &b);
	printf ("%d", a);
	printf ("%d", b);
	return (0);
}*/
