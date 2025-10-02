/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grecope- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 08:20:02 by grecope-          #+#    #+#             */
/*   Updated: 2025/09/25 08:07:05 by grecope-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
/*
int	main(void)
{
	char	s1[] = "hellos";
	char	s2[] = "hel";

	ft_strcmp(s1, s2);
	printf("result is : %i\n", ft_strcmp(s1, s2));
}*/
