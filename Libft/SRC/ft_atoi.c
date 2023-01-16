/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugur <yugur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:58:22 by yugur             #+#    #+#             */
/*   Updated: 2023/01/16 13:57:05 by yugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	tmp;

	i = 0;
	sign = 1;
	tmp = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		tmp = (tmp * 10) + (str[i] - 48);
		i++;
	}
	return (tmp * sign);
}
