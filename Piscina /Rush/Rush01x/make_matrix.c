/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:36:57 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/08 16:26:52 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	**make_matrix(void)
{
	int	i;
	int	**matrix;
	int	files;
	int	x;

	matrix = (int **)malloc(4 * 16);
	i = 0;
	if (matrix == NULL)
	{
		exit(1);
	}
	files = 4;
	while (i < files)
	{
		matrix[i] = (int *)malloc(4 * 16);
		if (matrix[i] == NULL)
		{
			exit(1);
		}
		i++;
	}
	x = 0;
	while (x < 04)
	{
		i = 0;
		while (i < 4)
		{
			matrix[x][i] = 2;
			i++;
		}
		x++;
	}
	for (int x = 0; x < 4; x++)
		for (int y = 0; y < 4; y++)
			printf("%d", matrix[x][y]);
	return (matrix);
}
/*int	main(void)
{
	int **outside;

	outside = make_matrix();
	for (int x = 0; x < 4; x++)
		for (int y = 0; y < 4; y++)
			printf("%d", outside[x][y]);
}*/
/*for (int i = 0; i < filas; i++) {
	free(array[i]);
}
free(array);*/
