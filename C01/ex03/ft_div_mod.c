/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grecope- <grecope-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:15:38 by grecope-          #+#    #+#             */
/*   Updated: 2025/09/15 09:16:36 by grecope-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	rdiv;
	int	rmod;

	a = 10;
	b = 3;
	rdiv = 0;
	rmod = 0;
	ft_div_mod(a, b, &rdiv, &rmod);
	printf ("%d, ", a);
	printf ("%d, ", b);
	printf ("%d, ", rdiv);
	printf ("%d, ", rmod);
	return (0);
}*/
