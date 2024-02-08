/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:14:17 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 11:49:28 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	**ft_complete(int **array)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		array[3][i] = 10 - array[0][i] - array[1][i] - array[2][i];
		i++;
	}
	i = 0;
	while (i < 3)
	{
		array[i][3] = 10 - array[i][0] - array[i][1] - array[i][2];
		i++;
	}
	array[3][3] = 10 - array[3][0] - array[3][1] - array[3][2];
	i = 0;
	return (array);
}

/*int	main(void)
{
	int	**outside;
	int	i;
	int	j;

	outside = (int **)malloc(4 * 16);
	i = 0;
	while (i < 4)
	{
		outside[i] = (int *)malloc(4 * 16);
		j = 0;
		while (j < 4)
		{
			outside[i][j] = i;
			printf("%d\n", outside[i][j]);
			j++;
		}
		i++;
	}
	/*i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			outside[i][j] = 2;
			printf("%d", outside[i][j]);
			j++;
		}
		i++;
	}
ft_complete(outside);
}*/
