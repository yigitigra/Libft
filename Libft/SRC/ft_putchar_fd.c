/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugur <yugur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:58:22 by yugur             #+#    #+#             */
/*   Updated: 2023/01/16 13:59:24 by yugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
	int i = open("test.txt", 1);
	printf("%d", i);
	ft_putchar_fd('a',i);
	int c = open("test2.txt", 1);
	printf("%d", c);
}*/