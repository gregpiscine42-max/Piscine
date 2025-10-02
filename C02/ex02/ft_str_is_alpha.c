/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grecope- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:10:22 by grecope-          #+#    #+#             */
/*   Updated: 2025/09/21 17:26:24 by grecope-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 65) && (str[i] <= 90))
				|| ((str[i] >= 97) && (str[i] <= 122))))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
    int result = 0;
    char str[] = "tott8o";

    result = ft_str_is_alpha(str);
    printf("result calc is : %i\n", result);
}*/
