/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugur <yugur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:58:22 by yugur             #+#    #+#             */
/*   Updated: 2023/01/16 13:57:05 by yugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
