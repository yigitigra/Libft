/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugur <yugur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:58:22 by yugur             #+#    #+#             */
/*   Updated: 2023/01/16 13:59:39 by yugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int main()
{
    int fd = open("test.txt", 1);
    printf("%d", fd);
    ft_putstr_fd("marto",fd);
}*/