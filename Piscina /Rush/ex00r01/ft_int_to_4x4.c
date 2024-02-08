/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_4x4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:39:24 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/01 13:30:15 by gnicolie         ###   ########.fr       */
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
	return (matrix);
}

int	**int_to_4x4(int ba4)
{
	int	x;
	int	i;
	int	**matrix;

	matrix = make_matrix();
	x = 2;
	while (x >= 0)
	{
		i = 2;
		while (i >= 0)
		{
			matrix[x][i] = ba4 % 10;
			ba4 = ba4 / 10;
			i--;
		}
		x--;
	}
	return (matrix);
}
