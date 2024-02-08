/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:06:36 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/12 13:06:37 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

char	read_file(char *filename)
{
	char	*buffer;
	int		fd;
	int		bytes_read;

	fd = open("map0", O_RDONLY);
	buffer = (char *)malloc(1024);
	if (buffer == '\0')
		return (0);
	bytes_read = read(fd, buffer, 1023);
	buffer[bytes_read] = '\0';
	close(fd);
	return (buffer);
}

int	main(int argc, int *argv[])
{
	char	*file_content;

	file_content = read_file("map0");
	ft_putchar(file_content);
	free(file_content);
	return (0);
}
